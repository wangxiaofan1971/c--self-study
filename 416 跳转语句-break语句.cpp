#include<iostream>
using namespace std;
int main16()
{
	////switch语句的使用
	//cout << "请选择副本的难度" << endl;
	//cout << "1.普通" << endl;
	//cout << "2.中等" << endl;
	//cout << "3.困难" << endl;
	//int select = 0;
	//cin >> select;
	//switch (select)
	//{
	//case 1:
	//	cout << "普通" << endl;
	//	break;
	//case 2:
	//	cout << "中等" << endl;
	//	break;
	//case 3:
	//	cout << "困难" << endl;
	//	break;
	//default:
	//	break;
	//}
	//出现在循环语句中
	//for (size_t i = 0; i < 10; i++)
	//{
	//	cout << i << endl;
	//	if (i == 5)
	//	{
	//		break;
	//	}
	//}
	//出现在嵌套结构中
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			cout << "* ";
			if (j >= i)
			{
				break;
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}