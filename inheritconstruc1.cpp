#include<iostream>
using namespace std;
class A
{
	int a;
	public:
	A(int k)
	{
		a=k;
		cout<<a<<"  ";
	}
	
};
class B : public A
{
	int b;
	public:
	B(int x,int y): A(x)
	{
		b=y;
		cout<<b<<endl;
	}
	
};
int main()
{
	B obj(3,7);
	return(0);
}





