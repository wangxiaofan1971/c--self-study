#include<iostream>
using namespace std;
//实现两个数字进行交换
void swap01(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << a << " " << b << endl;
}
void swap02(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	cout << a << " " << b << endl;
}
int main()
{
	int a = 10;
	int b = 20;
	swap01(a, b);
	cout << a <<" "<< b << endl;
	swap02(&a, &b);
	cout << a << " " << b << endl;
	system("pause");
	return 0;
}