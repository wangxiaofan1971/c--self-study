#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
/***����������**ϵͳ�������һ��1��100֮������֣���ҽ��в²⣬����´���ʾ������ֹ�����С������¶Թ�ϲ���ʤ���������˳���Ϸ��*/
int main9()
{
	srand((unsigned	int)time(NULL));  // �����������  ��0����NULLҲ��
	int num = 0;
	int gnum = 0;
	num = rand() % 100 + 1;
	cout << "�����²�" << endl;
	cin >> gnum;
	while (gnum != num)
	{
		if (num>gnum)
		{
			cout << "����������ֹ�С" << endl;
		}
		else
		{
			cout << "����������ֹ���" << endl;
		}
		cout << "���������²�" << endl;
		cin >> gnum;
	}
	cout << "��ϲ�ش���ȷ!����Ϊ" << num << endl;
	system("pause");
	return 0;
}