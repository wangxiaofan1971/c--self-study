#include<iostream>
using namespace std;
int main3()
{
	//1�������� float
	//2��˫���� double
	float f1 = 3.1415926f;
	double d1 = 3.1415926;
	cout << "f1Ϊ" << f1 << "�ڴ�" << sizeof(f1) << endl;
	cout << "d1Ϊ" << d1 <<"�ڴ�"<<sizeof(d1)<< endl;
	//��ѧ������
	float f2 = 3e2f;//3*10^2
	float f3 = 3e-2f;//0.03
	cout << "f2Ϊ" << f2 << endl;
	cout << "f3Ϊ" << f3 << endl;
	system("pause");
	return 0;
}