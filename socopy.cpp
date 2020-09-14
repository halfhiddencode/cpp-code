#include<iostream>
using namespace std;
class dummy
{
	int a,b;
	public:
	void setdata(int x,int y)
	{
		a=x;
		b=y;
	}
	void showdata()
	{
		cout<<a<<" "<<b<<endl;
	}
	dummy(dummy &d)
	{
		a=d.a;
		b=d.b;
	}
	dummy() //this is nesessary because if any one constructor is make by user you have to also make defualt constructor
	{
		//cout<<"hi avi"<<endl;
	}
};
int main()
{
	dummy d1,d3;
	d1.setdata(8,6);
	d3=d1;
	dummy d2=d1; //this
	d2.showdata();//and this are work with copy constructor
	d3.showdata();
}






