#include<iostream>
#include<string>
using namespace std;
struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

int main2() {

	//�ṹ������
	struct student arr[3] =
	{
		{ "����",18,80 },
		{ "����",19,60 },
		{ "����",20,70 }
	};

	for (int i = 0; i < 3; i++)
	{
		cout << "������"  << arr[i].name 
			 << " ���䣺" << arr[i].age 
			 << " ������" << arr[i].score << endl;
	}

	system("pause");

	return 0;
}