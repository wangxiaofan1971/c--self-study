#include<iostream>
using namespace std;
int main1()
{
	//1��ָ��Ķ���
	int a = 10; //�������ͱ���a

				//ָ�붨���﷨�� �������� * ������ ;
	int * p;

	//ָ�������ֵ
	p = &a; //ָ��ָ�����a�ĵ�ַ
	cout << &a << endl; //��ӡ����a�ĵ�ַ
	cout << p << endl;  //��ӡָ�����p

						//2��ָ���ʹ��
						//ͨ��*����ָ�����ָ����ڴ�
	cout << "*p = " << *p << endl;
	system("pause");
	return 0;
}