#include<iostream>
using namespace std;
class B;
class A
{
	int p;
	friend void fun(A,B);
	public:
	void input(int x)
	{
		p=x;
	}
};
class B
{
	int q;
	friend void fun(A,B);
	public:
	void input(int y)
	{
		q=y;
	}
};
void fun(A a,B b)
{
	cout<<a.p+b.q<<endl;
}
int main()
{
	A i1;B i2;
	i1.input(5);
	i2.input(8);
	fun(i1,i2);
	return(0);
}
