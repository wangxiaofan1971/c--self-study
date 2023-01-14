#include<iostream>
using namespace std;
#include"swap.h"
int main()
{
	int a = 3;
	int b = 4;
	int c;
	swap(a, b);
	c=max(a, b);
	cout << c;
	system("pause");
	return 0;
}