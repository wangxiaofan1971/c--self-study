#include<iostream>
using namespace std;
/***��ϰ����2��**����Ԫ������

**����������**������һ��5��Ԫ�ص����飬���ҽ�Ԫ������.

(��ԭ����Ԫ��Ϊ��1,3,2,5,4;���ú�������Ϊ:4,5,2,3,1);*/
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