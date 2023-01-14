#include<iostream>
#include<string>
using namespace std;
/***考试成绩统计：**

案例描述：有三名同学（张三，李四，王五），在一次考试中的成绩分别如下表，**请分别输出三名同学的总成绩**

|      | 语文 | 数学 | 英语 |
| ---- | ---- | ---- | ---- |
| 张三 | 100  | 100  | 100  |
| 李四 | 90   | 50   | 100  |
| 王五 | 60   | 70   | 80   |*/
int main()
{
	int score[3][3]=
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	int sum[3] = {0,0,0};
	string name[3] = { "张三","李四","王五" };
	string Class[3] = { "语文","数学","英语" };
	for (size_t i = 0; i < 3; i++)
	{
		cout << "同学" << name[i] << "成绩分别为：";
		for (size_t j = 0; j < 3; j++)
		{
			cout << Class[i] << score[i][j] << ";";
			sum[i] = sum[i] + score[i][j];//sum[i]+=score[i][j];
		}
		cout << "总成绩为" << sum[i];
		cout << endl;
	}
	system("pause");
	return 0;
}