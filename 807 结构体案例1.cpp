#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/***����������**

ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������

���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա

ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ

���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�*/
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
		cout << "��ʦ" << arrtea[i].name << ":" << endl;
		for (size_t j = 0; j < 5; j++)
		{
			cout << "ѧ��" << arrtea[i].arrstu[j].name << " ";
			cout << "�ɼ�" << arrtea[i].arrstu[j].score << " ;" << endl;
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
///***����������**
//
//ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
//
//���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
//
//ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
//
//���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�*/
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
//	string tName = "��ʦ";
//	string sName = "ѧ��";
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
//			cout << "\t������" << tArray[i].sArray[j].name << " ������" << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//
//int main7() {
//
//	srand((unsigned int)time(NULL)); //��������� ͷ�ļ� #include <ctime>
//
//	Teacher tArray[3]; //��ʦ����
//
//	int len = sizeof(tArray) / sizeof(Teacher);
//
//	allocateSpace(tArray, len); //��������
//
//	printTeachers(tArray, len); //��ӡ����
//
//	system("pause");
//
//	return 0;
//}