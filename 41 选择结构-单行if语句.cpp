#include<iostream>
using namespace std;
int main1()
{
	//选择结构-单行if语句
	//输入一个分数，如果分数大于600分，视为考上一本大学，并在屏幕上打印
	int grade = 0;
	cout << "请输入您的分数：";
	cin >> grade;
	if (grade >= 600)
	{
		cout << "恭喜您被一本大学录取！！！"<<endl;
	}
	system("pause");
	return 0;
}