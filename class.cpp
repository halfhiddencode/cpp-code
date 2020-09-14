#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
	void setdata(int x,int y)
	{
		a=x;
		b=y;
	}
	complex add(complex c)
	{
		complex temp;
		temp.a=a+c.a;
		temp.b=b+c.b;
		return(temp);
	}
	void display()
	{
		cout<<endl<<a<<endl<<b;
	}
};
int main()
{
	complex c1,c2,c3;
	c1.setdata(4,5);
	c2.setdata(5,8);
	c3=c1.add(c2);
	c3.display();
	return(0);
}
