#include<iostream>
using namespace std;
int main3()
{
	//1、单精度 float
	//2、双精度 double
	float f1 = 3.1415926f;
	double d1 = 3.1415926;
	cout << "f1为" << f1 << "内存" << sizeof(f1) << endl;
	cout << "d1为" << d1 <<"内存"<<sizeof(d1)<< endl;
	//科学计数法
	float f2 = 3e2f;//3*10^2
	float f3 = 3e-2f;//0.03
	cout << "f2为" << f2 << endl;
	cout << "f3为" << f3 << endl;
	system("pause");
	return 0;
}