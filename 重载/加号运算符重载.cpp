#include<iostream>
using namespace std;

//两个自定义数据类型的相加--加号运算符重载 Person + Person 数据类型

class Person {
public:
	int m_A;
	int m_B;
	//成员函数实现
	/*Person person_add_person(Person& p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/
	//成员函数重载的写法
	Person operator + (Person & p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
	//调用的写法 Person p3 = p1 operator+(p2);  简化为 Person p3 = p1 + p2;
};

void test01()
{

	Person p1;
	p1.m_A = 10;
	p1.m_B = 20;

	Person p2;
	p2.m_A = 10;
	p2.m_B = 20;

	Person p3 = p1 + p2;
	cout << p3.m_A <<"  "<< p3.m_B << " ";

}
/* 全局函数重载加号
Person operator+(Person& p1, Person& p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
 }*/
int main()
{

	test01();
	return 0;
}