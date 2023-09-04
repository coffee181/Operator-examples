#include<iostream>
using namespace std;
//递增运算符重载--实现自己的整型数据

class MyInteger {
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_Number = 0;
	}
	//重载前置++运算符
	MyInteger &operator++()//返回引用，因为要对同一个对象进行操作
	{
		//先++运算
		m_Number++;
		//再将自身返回
		return *this;
	}

	//重载后置++运算符
	//int 代表占位参数，区分前置后置递增
	MyInteger  operator++(int)//后置递增返回的是局部对象，所以不能返回引用
	{
		//先 记录当时结果
		MyInteger temp = *this;
		//后 递增
		m_Number++;
	    //最后将记录的结果返回
		return temp;
	}
private:
	int m_Number;
};
//重载左移运算符
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