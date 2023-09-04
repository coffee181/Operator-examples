#include<iostream>
using namespace std;
//赋值运算符重载0

class Person
{

public:
	Person(int age)
	{
		m_age = new int(age);
	}
	int* m_age;
	~Person()
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
	}
	//浅拷贝问题---重载赋值运算符
	Person& operator=(Person& p)
	{
		//先判断是否又属性在堆区，有的话先释放干净，再深拷贝
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		//深拷贝
		m_age = new int(*p.m_age);

		return *this;
	}
};
void test01()
{
	Person p1(18);
	Person p2(20);
	Person p3(30);
	p3=p2 = p1;//赋值运算操作
	cout << "p1的年龄为： " <<*p1.m_age << endl;
	cout << "p2的年龄为： " << *p1.m_age << endl;
	cout << "p3的年龄为： " << *p1.m_age << endl;
}
int main()
{
	test01();
	return 0;
}