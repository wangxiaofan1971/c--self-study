#include<iostream>
using namespace std;
/***����������**ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������

���磺1^3 + 5^3+ 3^3 = 153

������do...while��䣬�������3λ���е�ˮ�ɻ���*/
int main11()
{
	int num = 100;
	int g = 0;
	int	s = 0;
	int b = 0;
	int	sum = 0;
	do
	{
		g = num % 10;
		s = (num % 100) / 10;
		b = num / 100;
		sum = g*g*g + s*s*s + b*b*b;
		if (sum == num)
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
	system("pause");
	return 0;
}