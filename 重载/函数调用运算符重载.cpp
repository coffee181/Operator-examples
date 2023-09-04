#include<iostream>
using namespace std;
#include<string>
//函数调用运算符（）也可以重载--仿函数
//打印输出类
class Myprint
{
public:
	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};
//函数
void MyPrint(string test)
{
	cout << test << endl;
}
void test01()
{
	Myprint myprint;
	//重载函数调用运算符----仿函数
	myprint("hello world");
	MyPrint("hello world");
}
int main()
{
	test01();
	return 0;
}