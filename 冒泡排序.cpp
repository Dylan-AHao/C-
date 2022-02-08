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
		cout << "������" << heroarray[i].name << "  ���䣺" << heroarray[i].age << "  �Ա�" << heroarray[i].sex << endl;
	}
}

int main()
{
	struct Hero heroarray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};

	int len = sizeof(heroarray) / sizeof(heroarray[0]);
	for (int i = 0; i < len; i++)
	{
		//cout << "������" << heroarray[i].name << "  ���䣺" << heroarray[i].age << "  �Ա�" << heroarray[i].sex << endl;
		bubblesort(heroarray, len);
	};

	printHero(heroarray, len);

	system("pause");

	return 0;
}