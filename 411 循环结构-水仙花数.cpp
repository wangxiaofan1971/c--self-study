#include<iostream>
using namespace std;
/***案例描述：**水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身

例如：1^3 + 5^3+ 3^3 = 153

请利用do...while语句，求出所有3位数中的水仙花数*/
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