#include<iostream>
using namespace std;
int main17()
{
	for (size_t i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}
	system("pause");
	return 0;
}