#include<iostream>
#include<string>
using namespace std;
/***���Գɼ�ͳ�ƣ�**

����������������ͬѧ�����������ģ����壩����һ�ο����еĳɼ��ֱ����±�**��ֱ��������ͬѧ���ܳɼ�**

|      | ���� | ��ѧ | Ӣ�� |
| ---- | ---- | ---- | ---- |
| ���� | 100  | 100  | 100  |
| ���� | 90   | 50   | 100  |
| ���� | 60   | 70   | 80   |*/
int main()
{
	int score[3][3]=
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	int sum[3] = {0,0,0};
	string name[3] = { "����","����","����" };
	string Class[3] = { "����","��ѧ","Ӣ��" };
	for (size_t i = 0; i < 3; i++)
	{
		cout << "ͬѧ" << name[i] << "�ɼ��ֱ�Ϊ��";
		for (size_t j = 0; j < 3; j++)
		{
			cout << Class[i] << score[i][j] << ";";
			sum[i] = sum[i] + score[i][j];//sum[i]+=score[i][j];
		}
		cout << "�ܳɼ�Ϊ" << sum[i];
		cout << endl;
	}
	system("pause");
	return 0;
}