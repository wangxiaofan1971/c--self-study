#include<iostream>
using namespace std;
/***练习案例2：**数组元素逆置

**案例描述：**请声明一个5个元素的数组，并且将元素逆置.

(如原数组元素为：1,3,2,5,4;逆置后输出结果为:4,5,2,3,1);*/
int main4()
{
	int arr[5] = { 1,3,2,5,4 };
	int arrt[5];
	for (size_t i = 0; i < 5; i++)
	{
		arrt[i] = arr[4 - i];
		cout << arrt[i] << endl;
	}
	system("pause");
	return 0;
}