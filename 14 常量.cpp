#include<iostream>
/*iostream.h��input output stream�ļ�д����˼Ϊ��׼�����������ͷ�ļ�����������
  ��1��cin>>"Ҫ���������"
  ��2��cout<<"Ҫ���������"*/
using namespace std;
#define day 7
int main4() {
	cout << "һ�����ܹ��� " << day << " ��" << endl;
	//day = 8; //�����곣���������޸�
	//2��const���α���
	const int month = 12;
	cout << "һ�����ܹ��� " << month << " ���·�" << endl;
	//month = 24; //���������ǲ������޸ĵ�
	system("pause");
	return 0;
}