#include<iostream>
using namespace std;
int main7()
{
	int score = 0;
	cout << "请输入电影评分:" << endl;
	cin >> score;
	cout << "您打的分数为：" << score << endl;
	switch (score)
	{
	case 10:
		cout << "您认为是经典电影" << endl; 
		break;
	case 9:
		cout << "您认为是经典电影" << endl; 
		break;
	case 8:
		cout << "您认为是好看电影" << endl; 
		break;
	case 7:
		cout << "您认为是一般电影" << endl; 
		break;
	default:
		cout << "您认为是烂片" << endl;
		break;
	}
	system("pause");
	return 0;
}