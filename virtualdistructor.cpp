#include<iostream>
using namespace std;
class A
{
	int a;
	public:
	A()
	{
	
	}
	virtual ~A()
	{
	
	}
};
class B : public A
{
	int b;
	public:
	B()
	{
	
	}
	~B()
	{
	
	}
};
int main()
{
	A *p=new B;
	delete p;
}



