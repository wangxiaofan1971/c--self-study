#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	int rel = 0;
	for (size_t i = 1; i < 10; i++)
	{
		n = i;
		for (size_t j = 1; j < n+1; j++)
		{
			rel = i*j;
			cout << j << "*" << i << "=" << rel<<"\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}