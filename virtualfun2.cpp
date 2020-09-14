#include<iostream>
using namespace std;
class A
{
	public:
	void f1(){}
	virtual void f2(){}
	virtual void f3(){}
	virtual void f4(){}
};
class B : public A
{
	public:
	void f1(){}
	void f2(){}
	void f4(int x){}
};
int main()
{
	A *p,o1;
	p=&o1;
	p->f1(); EB
	p->f2(); LB
	p->f3(); LB
	p->f4(); LB
	p->f4(5); EB //IT gives error due to early binding
	B o2;
	p=&o2;
	p->f1(); EB // wrong function execute i.e. class A
	p->f2(); LB // correct fun execut i.e. claas B
	p->f3(); LB // claas A
	p->f4(); LB // claas A
	p->f4(5); EB //IT gives error due to early binding
}



