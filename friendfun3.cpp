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
	friend complex operator +(complex,complex);
};
complex operator +(complex x,complex y)
{
	complex temp;
	temp.a=x.a+y.a;
	temp.b=x.b+y.b;
	return(temp);
}
int main()
{
	complex c1,c2,c3;
	c1.input(5,7);
	c2.input(3,2);
	c3=c1+c2;
	c3.output();
	return(0);
}



