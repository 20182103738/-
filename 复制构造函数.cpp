// test5.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << "Ĭ�Ϲ��캯�� x = " << x << " " << "y = " << y << endl;
}
CTestCopy::~CTestCopy()
{
	cout << "�������� x = " << x << " " << "y = " << y << endl;
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
	cout << "���ƺ��� x = " << x << " " << "y = " << y << endl;
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

