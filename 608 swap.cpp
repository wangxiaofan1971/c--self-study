#include"swap.h"
#include<iostream>
using namespace std;
void swap(int num1, int num2)
{
	int tmp;
	tmp = num1;
	num1 = num2;
	num2 = tmp;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
}