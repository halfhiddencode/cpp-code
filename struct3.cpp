#include<iostream>
using namespace std;
struct complex
{
	int a,b;
	void setdata(int x,int y)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<a<<endl<<b;
	}
};
int main()
{
	complex c1,c2;
	c1.setdata(5,8);
	c2=c1;
	c2.display();
	return(0); 
}
