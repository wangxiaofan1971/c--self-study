#include<iostream>
using namespace std;
int main16()
{
	////switch����ʹ��
	//cout << "��ѡ�񸱱����Ѷ�" << endl;
	//cout << "1.��ͨ" << endl;
	//cout << "2.�е�" << endl;
	//cout << "3.����" << endl;
	//int select = 0;
	//cin >> select;
	//switch (select)
	//{
	//case 1:
	//	cout << "��ͨ" << endl;
	//	break;
	//case 2:
	//	cout << "�е�" << endl;
	//	break;
	//case 3:
	//	cout << "����" << endl;
	//	break;
	//default:
	//	break;
	//}
	//������ѭ�������
	//for (size_t i = 0; i < 10; i++)
	//{
	//	cout << i << endl;
	//	if (i == 5)
	//	{
	//		break;
	//	}
	//}
	//������Ƕ�׽ṹ��
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			cout << "* ";
			if (j >= i)
			{
				break;
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}