#include<iostream>
using namespace std;
/***练习案例1**：五只小猪称体重

**案例描述：**

在一个数组中记录了五只小猪的体重，如：int arr[5] = {300,350,200,400,250};

找出并打印最重的小猪体重。*/
int main3()
{
	int arr[5] = { 300,350,200,400,250 };
	int	max = 0;
	for (size_t i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "小猪最终体重为：" << max << endl;
	system("pause");
	return 0;
}