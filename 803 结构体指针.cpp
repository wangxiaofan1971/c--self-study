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
int main()
{
	struct student s1 = { "����",99,99};
	struct student *p = &s1;
	cout << p->age << endl;
	cout << p->name << endl;
	cout << p->score << endl;
	system("pause");
	return 0;
}