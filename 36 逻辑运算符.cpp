#include<iostream>
using namespace std;
int main()
{
	//Âß¼­ÔËËã·û
	/*int	a = 10;
	cout << !a << endl;
	cout << !!a << endl*/;
	//Âß¼­ÓëÔËËã·û
	/*int a = 10;
	int b = 10;

	cout << (a && b) << endl;// 1

	a = 10;
	b = 0;

	cout << (a && b) << endl;// 0 

	a = 0;
	b = 0;

	cout << (a && b) << endl;// 0*/
	//Âß¼­»ò
int a = 10;
int b = 10;

cout << (a || b) << endl;// 1

a = 10;
b = 0;

cout << (a || b) << endl;// 1 

a = 0;
b = 0;

cout << (a || b) << endl;// 0
system("pause");
	return 0;
}