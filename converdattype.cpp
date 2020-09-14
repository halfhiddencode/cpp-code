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
	void showdata()
	{
		cout<<a<<" "<<b<<endl;
	}
	complex(int k)
	{
		a=k; b=0;
	}
	complex()
	{}
};
int main()
{
	complex c1,c2;
	int x=3;
	c1.setdata(7,9);
	c2=x;
	c1.showdata();
	c2.showdata();
}
