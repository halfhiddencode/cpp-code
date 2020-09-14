#include<iostream>
using namespace std;
class A
{
	public:
	virtual void f1(){}
};
class B : public A
{
	void f1(){} //function overriding
};
int main()
{
	B obj;
	A *p; //BECAUSE *p is type a so it go to A but due to //virtual it check value of p not type of p;
	//it goes late binding not early binding; 
	p=&obj;
	p->f1();
}
