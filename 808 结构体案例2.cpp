#include<iostream>
#include<string>
using namespace std;
/*设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数组中存放5名英雄。

通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
五名英雄信息如下：
{"刘备",23,"男"},
{"关羽",22,"男"},
{"张飞",20,"男"},
{"赵云",21,"男"},
{"貂蝉",19,"女"},*/
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
		{ "刘备",23,"男" },
		{ "关羽",22,"男" },
		{ "张飞",20,"男" },
		{ "赵云",21,"男" },
		{ "貂蝉",19,"女" }
	};
	sort(arr);
	print(arr);
	system("pause");
	return 0;
}
////英雄结构体
//struct hero
//{
//	string name;
//	int age;
//	string sex;
//};
////冒泡排序
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
////打印数组
//void printHeros(hero arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "姓名： " << arr[i].name << " 性别： " << arr[i].sex << " 年龄： " << arr[i].age << endl;
//	}
//}
//
//int main() {
//
//	struct hero arr[5] =
//	{
//		{ "刘备",23,"男" },
//		{ "关羽",22,"男" },
//		{ "张飞",20,"男" },
//		{ "赵云",21,"男" },
//		{ "貂蝉",19,"女" },
//	};
//
//	int len = sizeof(arr) / sizeof(hero); //获取数组元素个数
//
//	bubbleSort(arr, len); //排序
//
//	printHeros(arr, len); //打印
//
//	system("pause");
//
//	return 0;
//}