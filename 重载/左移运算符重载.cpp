#include<iostream>
using namespace std;

//�������������--��������Զ�����������
class Person {
	friend ostream& operator<<(ostream& cout, Person& p);
public:
	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}
private:
	int m_A;
	int m_B;
	//�������ó�Ա��������--�޷�ʵ��cout�����
	
};
//����ȫ�ֺ����������������
ostream &operator<<(ostream& cout, Person& p)
{
	cout << "m_A =" << p.m_A <<"  " << "m_B =" << p.m_B << " ";
	return cout;
 }
void test01()
{
	Person p(10,10);
	cout << p << endl;
}
int main()
{
	test01();
	return 0;
}