#include<iostream>
using namespace std;
int main2()
{
	int grade = 0;
	while (true)
	{
		cout << "���������ķ�����";
		cin >> grade;
		if (grade >= 600)
		{
			cout << "��ϲ����һ����ѧ¼ȡ������" << endl;
		}
		else
		{
			cout << "���ź���δ��¼ȡ������" << endl;
		}
	}
	system("pause");
	return 0;
}