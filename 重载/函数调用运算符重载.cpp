#include<iostream>
using namespace std;
#include<string>
//�����������������Ҳ��������--�º���
//��ӡ�����
class Myprint
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};
//����
void MyPrint(string test)
{
	cout << test << endl;
}
void test01()
{
	Myprint myprint;
	//���غ������������----�º���
	myprint("hello world");
	MyPrint("hello world");
}
int main()
{
	test01();
	return 0;
}