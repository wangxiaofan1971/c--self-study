#include<iostream>
using namespace std;
//����ֻС��ABC����ֱ�������ֻС������أ������ж���ֻС�����أ�
int main5()
{
	int pa = 0;
	int pb = 0;
	int pc = 0;
	cout << "��ֱ�������ֻС�������" << endl;
	cout << "С��A������Ϊ��";
	cin >> pa;
	cout << "С��B������Ϊ��";
	cin >> pb;
	cout << "С��C������Ϊ��";
	cin >> pc;
	if (pa > pb)
	{
		if (pa > pc)
		{
			cout << "С��A����" << endl;
		}
		else if (pa < pc)
		{
			cout << "С��C����" << endl;
		}
		else
		{
			cout << "С��A��Cһ����" << endl;
		}
	}
	else if(pa<pb)
	{
		if (pb> pc)
		{
			cout << "С��B����" << endl;
		}
		else if (pb < pc)
		{
			cout << "С��C����" << endl;
		}
		else
		{
			cout << "С��B��Cһ����" << endl;
		}
	}
	else
	{
		if (pa> pc)
		{
			cout << "С��A��Bһ����" << endl;
		}
		else if (pa< pc)
		{
			cout << "С��C����" << endl;
		}
		else
		{
			cout << "��ֻС��һ����" << endl;
		}
	}
	system("pause");
	return 0;
}