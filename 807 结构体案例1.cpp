#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/***案例描述：**

学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下

设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员

学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值

最终打印出老师数据以及老师所带的学生数据。*/
struct stu
{
	string name;
	int score;
};
struct tea
{
	string name;
	struct stu arrstu[5];
};

void inputnum(tea *arrtea)
{
	string nameSeed = "ABCDE";
	for (size_t i = 0; i < 3; i++)
	{
		arrtea[i].name = nameSeed[i];
		for (size_t j = 0;  j < 5;  j++)
		{
			arrtea[i].arrstu[j].name = nameSeed[j];
			arrtea[i].arrstu[j].score = rand() % 61 + 40;
		}
	}
}
void putnum(tea *arrtea)
{
	for (size_t i = 0; i < 3; i++)
	{
		cout << "教师" << arrtea[i].name << ":" << endl;
		for (size_t j = 0; j < 5; j++)
		{
			cout << "学生" << arrtea[i].arrstu[j].name << " ";
			cout << "成绩" << arrtea[i].arrstu[j].score << " ;" << endl;
		}
	}
}

int main7()
{
	srand((unsigned int)time(NULL));
	struct tea arrtea[3];
	inputnum(arrtea);
	putnum(arrtea);
	system("pause");
	return 0;
}
//#include<iostream>
//#include<string>
//#include<ctime>
//using namespace std;
///***案例描述：**
//
//学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
//
//设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
//
//学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
//
//最终打印出老师数据以及老师所带的学生数据。*/
//struct Student
//{
//	string name;
//	int score;
//};
//struct Teacher
//{
//	string name;
//	Student sArray[5];
//};
//
//void allocateSpace(Teacher tArray[], int len)
//{
//	string tName = "教师";
//	string sName = "学生";
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].name = tName + nameSeed[i];
//
//		for (int j = 0; j < 5; j++)
//		{
//			tArray[i].sArray[j].name = sName + nameSeed[j];
//			tArray[i].sArray[j].score = rand() % 61 + 40;
//		}
//	}
//}
//
//void printTeachers(Teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << tArray[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t姓名：" << tArray[i].sArray[j].name << " 分数：" << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//
//int main7() {
//
//	srand((unsigned int)time(NULL)); //随机数种子 头文件 #include <ctime>
//
//	Teacher tArray[3]; //老师数组
//
//	int len = sizeof(tArray) / sizeof(Teacher);
//
//	allocateSpace(tArray, len); //创建数据
//
//	printTeachers(tArray, len); //打印数据
//
//	system("pause");
//
//	return 0;
//}