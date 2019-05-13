// test5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CTestCopy
{
private:
	int x;
	int y;
public:
	CTestCopy();
	~CTestCopy();
	CTestCopy(int a, int b);
	CTestCopy(CTestCopy & om);
	void setXY(int a, int b);
	void display();
};
CTestCopy::CTestCopy()
{
	x = 0;
	y = 0;
	cout << "默认构造函数 x = " << x << " " << "y = " << y << endl;
}
CTestCopy::~CTestCopy()
{
	cout << "析构函数 x = " << x << " " << "y = " << y << endl;
}
CTestCopy::CTestCopy(int a, int b)
{
	x = a;
    y = b;
	cout << "x = " << x << " " << "y = " << y << endl;
}
CTestCopy::CTestCopy(CTestCopy & om)
{
	x = om.x * 2;
	y = om.y * 2;
	cout << "复制函数 x = " << x << " " << "y = " << y << endl;
}
void CTestCopy::setXY(int a, int b)
{
	x = a;
	y = b;
}
void CTestCopy::display()
{
	cout << "x = " << x << " " << "y = " << y << endl;
}
CTestCopy mytest()
{
	CTestCopy om(200, 300);
	om.display();
	return om;
}

int main()
{
	CTestCopy ot(100, 200);
    ot.display();
	mytest();
	mytest().display();
    return 0;
}

