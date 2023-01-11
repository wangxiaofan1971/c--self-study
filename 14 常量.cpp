#include<iostream>
/*iostream.h是input output stream的简写，意思为标准的输入输出流头文件。它包含：
  （1）cin>>"要输入的内容"
  （2）cout<<"要输出的内容"*/
using namespace std;
#define day 7
int main4() {
	cout << "一周里总共有 " << day << " 天" << endl;
	//day = 8; //报错，宏常量不可以修改
	//2、const修饰变量
	const int month = 12;
	cout << "一年里总共有 " << month << " 个月份" << endl;
	//month = 24; //报错，常量是不可以修改的
	system("pause");
	return 0;
}