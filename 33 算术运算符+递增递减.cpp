#include<iostream>
using namespace std;
int main3()
{	//���õ���
	int a = 10;
	a++; //�ȼ���a = a + 1
	cout << a << endl; // 11

					   //ǰ�õ���
	int b = 10;
	++b;
	cout << b << endl; // 11

					   //����
					   //ǰ�õ����ȶԱ�������++���ټ�����ʽ
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << b2 << endl;

	//���õ����ȼ�����ʽ����Ա�������++
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << b3 << endl;
	cout << a3 << endl;

	system("pause");
	return 0;
}