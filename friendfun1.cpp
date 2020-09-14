#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
	void input(int x,int y)
	{
		a=x; b=y;
	}
	void output()
	{
		cout<<a<<" "<<b<<endl;
	}
	friend void fun(complex);
};
void fun(complex c)
{
	cout<<"sum is"<<c.a+c.b;
}
int main()
{
	complex c1;
	c1.input(2,5);
	c1.output();
	fun(c1);
	return(0);
}
