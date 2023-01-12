#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
/***案例描述：**系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏。*/
int main9()
{
	srand((unsigned	int)time(NULL));  // 产生随机种子  把0换成NULL也行
	int num = 0;
	int gnum = 0;
	num = rand() % 100 + 1;
	cout << "请您猜测" << endl;
	cin >> gnum;
	while (gnum != num)
	{
		if (num>gnum)
		{
			cout << "您输入的数字过小" << endl;
		}
		else
		{
			cout << "您输入的数字过大" << endl;
		}
		cout << "请您继续猜测" << endl;
		cin >> gnum;
	}
	cout << "恭喜回答正确!数字为" << num << endl;
	system("pause");
	return 0;
}
