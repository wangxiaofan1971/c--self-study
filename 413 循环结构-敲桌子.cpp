#include<iostream>
using namespace std;
/***��ϰ������������**

������������1��ʼ��������100�� ������ָ�λ����7����������ʮλ����7�����߸�������7�ı��������Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ�����*/
int main13()
{
	int num = 1;
	for (size_t i = 0; i < 100; i++)
	{
		if (num % 10 == 7)
		{
			cout << "������" << num << endl;
			goto FLAG;
		}
		if (num / 10 == 7)
		{
			cout << "������" << num << endl;
			goto FLAG;
		}
		if (num % 10 == 7)
		{
			cout << "������" << num << endl;
			goto FLAG;
		}
		FLAG:num++;
	}
	system("pause");
	return 0;
}