#include<iostream>
using namespace std;
/***练习案例：敲桌子**

案例描述：从1开始数到数字100， 如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出。*/
int main13()
{
	int num = 1;
	for (size_t i = 0; i < 100; i++)
	{
		if (num % 10 == 7)
		{
			cout << "敲桌子" << num << endl;
			goto FLAG;
		}
		if (num / 10 == 7)
		{
			cout << "敲桌子" << num << endl;
			goto FLAG;
		}
		if (num % 10 == 7)
		{
			cout << "敲桌子" << num << endl;
			goto FLAG;
		}
		FLAG:num++;
	}
	system("pause");
	return 0;
}