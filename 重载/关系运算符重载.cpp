#include<iostream>
using namespace std;
#include<string>
//���ع�ϵ�����--��==��Ϊ��
class Person {
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	//���ع�ϵ�����==��
	bool operator==(Person& p)
	{
		if (this->m_Name==p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}
	string m_Name;
	int m_Age;

};
void test01()
{
	Person p1("Tom", 18);
	Person p2("Bom", 20);

	if (p1 == p2)
	{
		cout << "p1��p2����ȵ�" << endl;
	}
	else {
		cout << "p1��p2�ǲ���ȵ�" << endl;
	}
}
int main()
{
	test01();
	return 0;
}