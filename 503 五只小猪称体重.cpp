#include<iostream>
using namespace std;
/***��ϰ����1**����ֻС�������

**����������**

��һ�������м�¼����ֻС������أ��磺int arr[5] = {300,350,200,400,250};

�ҳ�����ӡ���ص�С�����ء�*/
int main3()
{
	int arr[5] = { 300,350,200,400,250 };
	int	max = 0;
	for (size_t i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "С����������Ϊ��" << max << endl;
	system("pause");
	return 0;
}