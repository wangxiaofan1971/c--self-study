#include<iostream>
using namespace std;
int main7()
{
	int score = 0;
	cout << "�������Ӱ����:" << endl;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;
	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl; 
		break;
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl; 
		break;
	case 8:
		cout << "����Ϊ�Ǻÿ���Ӱ" << endl; 
		break;
	case 7:
		cout << "����Ϊ��һ���Ӱ" << endl; 
		break;
	default:
		cout << "����Ϊ����Ƭ" << endl;
		break;
	}
	system("pause");
	return 0;
}