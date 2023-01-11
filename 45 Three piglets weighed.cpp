#include<iostream>
using namespace std;
//有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重？
int main5()
{
	int pa = 0;
	int pb = 0;
	int pc = 0;
	cout << "请分别输入三只小猪的体重" << endl;
	cout << "小猪A的体重为：";
	cin >> pa;
	cout << "小猪B的体重为：";
	cin >> pb;
	cout << "小猪C的体重为：";
	cin >> pc;
	if (pa > pb)
	{
		if (pa > pc)
		{
			cout << "小猪A最重" << endl;
		}
		else if (pa < pc)
		{
			cout << "小猪C最重" << endl;
		}
		else
		{
			cout << "小猪A、C一样重" << endl;
		}
	}
	else if(pa<pb)
	{
		if (pb> pc)
		{
			cout << "小猪B最重" << endl;
		}
		else if (pb < pc)
		{
			cout << "小猪C最重" << endl;
		}
		else
		{
			cout << "小猪B、C一样重" << endl;
		}
	}
	else
	{
		if (pa> pc)
		{
			cout << "小猪A、B一样重" << endl;
		}
		else if (pa< pc)
		{
			cout << "小猪C最重" << endl;
		}
		else
		{
			cout << "三只小猪一样重" << endl;
		}
	}
	system("pause");
	return 0;
}