#include<iostream>
using namespace std;
//�������������--ʵ���Լ�����������

class MyInteger {
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_Number = 0;
	}
	//����ǰ��++�����
	MyInteger &operator++()//�������ã���ΪҪ��ͬһ��������в���
	{
		//��++����
		m_Number++;
		//�ٽ�������
		return *this;
	}

	//���غ���++�����
	//int ����ռλ����������ǰ�ú��õ���
	MyInteger  operator++(int)//���õ������ص��Ǿֲ��������Բ��ܷ�������
	{
		//�� ��¼��ʱ���
		MyInteger temp = *this;
		//�� ����
		m_Number++;
	    //��󽫼�¼�Ľ������
		return temp;
	}
private:
	int m_Number;
};
//�������������
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_Number <<" ";
	return cout;
}
void test01()
{
	MyInteger myint;
	cout << myint << endl;
	cout <<++myint << endl;
	cout << myint++ << endl;
	cout << myint << endl;

}
int main()
{
	test01();
	return 0;
}