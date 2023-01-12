#include<iostream>
using namespace std;
//将数组 { 4,2,8,0,5,7,1,3,9 } 进行升序排序
int main()
{
	int arr[9] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };
	int tmp = 0;
	for (size_t i = 0; i < 8; i++)
	{
		for (size_t j = 0; j < 8-i; j++)
		{
			if (arr[j] > arr[j + 1])
				{
					tmp = arr[j+1];
					arr[j+ 1] = arr[j];
					arr[j] = tmp;
				}
		}
		
	}
	for (size_t i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}