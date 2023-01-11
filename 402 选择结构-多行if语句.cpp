#include<iostream>
using namespace std;
int main2()
{
	int grade = 0;
	while (true)
	{
		cout << "请输入您的分数：";
		cin >> grade;
		if (grade >= 600)
		{
			cout << "恭喜您被一本大学录取！！！" << endl;
		}
		else
		{
			cout << "很遗憾您未被录取！！！" << endl;
		}
	}
	system("pause");
	return 0;
}
