#include<iostream>
using namespace std;
class A
{
	public:
	void f1()//method of overriding;
	{
		
	}
	void f2() //method of hidding 
	{
		
	}
};
class B : public A
{
	public:
	void f1()
	{
		
	}
	void f2(int x)
	{
		
	}
};
int main()
{
	B obj;
	obj.f1();
	obj.f2(); //it gives error because it always go ****type of object and if function is match it not go further;
	//if function not match with function in its own class then it goes to **/parent class;
	obj.f2(4);
}







