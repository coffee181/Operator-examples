#include<iostream>
using namespace std;
//��ֵ���������0

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
	//ǳ��������---���ظ�ֵ�����
	Person& operator=(Person& p)
	{
		//���ж��Ƿ��������ڶ������еĻ����ͷŸɾ��������
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		//���
		m_age = new int(*p.m_age);

		return *this;
	}
};
void test01()
{
	Person p1(18);
	Person p2(20);
	Person p3(30);
	p3=p2 = p1;//��ֵ�������
	cout << "p1������Ϊ�� " <<*p1.m_age << endl;
	cout << "p2������Ϊ�� " << *p1.m_age << endl;
	cout << "p3������Ϊ�� " << *p1.m_age << endl;
}
int main()
{
	test01();
	return 0;
}