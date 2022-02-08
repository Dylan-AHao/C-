#include <iostream>
using namespace std;
#include <string>

struct Hero
{
	string name;
	int age;
	string sex;
};

void bubblesort(struct Hero heroarray[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroarray[j].age > heroarray[j + 1].age)
			{
				struct Hero temp = heroarray[j + 1];
				heroarray[j + 1] = heroarray[j];
				heroarray[j] = temp;
			}
		}
	}
};

void printHero(struct Hero heroarray[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << heroarray[i].name << "  年龄：" << heroarray[i].age << "  性别：" << heroarray[i].sex << endl;
	}
}

int main()
{
	struct Hero heroarray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};

	int len = sizeof(heroarray) / sizeof(heroarray[0]);
	for (int i = 0; i < len; i++)
	{
		//cout << "姓名：" << heroarray[i].name << "  年龄：" << heroarray[i].age << "  性别：" << heroarray[i].sex << endl;
		bubblesort(heroarray, len);
	};

	printHero(heroarray, len);

	system("pause");

	return 0;
}