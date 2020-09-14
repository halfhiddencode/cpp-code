#include<iostream>
using namespace std;
class dummy
{
	int a,b,*p;
	public:
	dummy()
	{
		p=new int;
	}
	void setdata(int x,int y,int z)
	{
		a=x;
		b=y;
		*p=z;
	}
	dummy(dummy &d)
	{
		p=new int;
		a=d.a;
		b=d.b;
		*p=*(d.p);
	}
	~dummy()
	{
		delete p;
		cout<<"hi avinasdh"<<endl<<p;
	}
	void showdata()
	{
		cout<<a<<" "<<b<<" "<<*p<<endl<<p<<endl;
	}
};
int main()
{
	dummy d1,d2;
	d1.setdata(5,8,3);
	d2=d1;
	d1.showdata();
	d2.showdata();
}


