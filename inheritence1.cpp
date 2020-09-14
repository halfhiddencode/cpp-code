#include<iostream>
using namespace std;
class A
{
	public:
	int a;
	void setvalue(int y)
	{
		a=y;
	}
	void output()
	{
		cout<<a<<endl;
	}	
};
class B : public A
/*class B : public A  (private is private and public is public and protected is protected)
  class B : protected A (private is private and public is protected and protected is protected)
  class B : private A  (all member and function will be private)*/
{
	public:
	//void setdata(int x)
	//{
	//	setvalue(x);
	//}
	void display()
	{
		output();
	}
};
int main()
{
	B b;
	b.setvalue(4);
	b.display();
	cout<<b.a;
}
