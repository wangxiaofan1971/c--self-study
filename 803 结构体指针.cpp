#include<iostream>
#include<string>
using namespace std;
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};
int main()
{
	struct student s1 = { "老贼",99,99};
	struct student *p = &s1;
	cout << p->age << endl;
	cout << p->name << endl;
	cout << p->score << endl;
	system("pause");
	return 0;
}