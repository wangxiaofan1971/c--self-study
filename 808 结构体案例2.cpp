#include<iostream>
#include<string>
using namespace std;
/*���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�;�����ṹ�����飬�����д��5��Ӣ�ۡ�

ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����
����Ӣ����Ϣ���£�
{"����",23,"��"},
{"����",22,"��"},
{"�ŷ�",20,"��"},
{"����",21,"��"},
{"����",19,"Ů"},*/
struct hero
{
	string name;
	int year;
	string sex;
};
void sort(hero *arr)
{
	hero tmp = { "",0,"" };
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4-i; j++)
		{
			if (arr[j].year>arr[j+1].year)
			{
				tmp.name = arr[j + 1].name;
				tmp.sex = arr[j + 1].sex;
				tmp.year = arr[j + 1].year;
				arr[j + 1].year = arr[j].year;
				arr[j + 1].sex = arr[j].sex;
				arr[j + 1].name = arr[j].name;
				arr[j].year = tmp.year;
				arr[j].name = tmp.name;
				arr[j].sex = tmp.sex;
			}
		}
	}
}
void print(hero *arr)
{
	for (size_t i = 0; i < 5; i++)
	{
		cout << arr[i].name << "," << arr[i].year << "," << arr[i].sex << endl;
	}
}


int main()
{
	hero arr[5] = {
		{ "����",23,"��" },
		{ "����",22,"��" },
		{ "�ŷ�",20,"��" },
		{ "����",21,"��" },
		{ "����",19,"Ů" }
	};
	sort(arr);
	print(arr);
	system("pause");
	return 0;
}
////Ӣ�۽ṹ��
//struct hero
//{
//	string name;
//	int age;
//	string sex;
//};
////ð������
//void bubbleSort(hero arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j].age > arr[j + 1].age)
//			{
//				hero temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
////��ӡ����
//void printHeros(hero arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "������ " << arr[i].name << " �Ա� " << arr[i].sex << " ���䣺 " << arr[i].age << endl;
//	}
//}
//
//int main() {
//
//	struct hero arr[5] =
//	{
//		{ "����",23,"��" },
//		{ "����",22,"��" },
//		{ "�ŷ�",20,"��" },
//		{ "����",21,"��" },
//		{ "����",19,"Ů" },
//	};
//
//	int len = sizeof(arr) / sizeof(hero); //��ȡ����Ԫ�ظ���
//
//	bubbleSort(arr, len); //����
//
//	printHeros(arr, len); //��ӡ
//
//	system("pause");
//
//	return 0;
//}