#include<iostream>
using namespace std;
int main2()
{
	int a = 10;
	int *p = &a;
	cout << sizeof(int *) << endl;
	cout << sizeof(float *) << endl;
	cout << sizeof(double *) << endl;
	cout << sizeof(char *) << endl;
	system("pause");
	return 0;
}