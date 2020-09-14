#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
	void setdata(int x,int y)
	{
		a=x; b=y;
	}
	complex operator+(complex c2)
	{
		complex temp;
		temp.a=a+c2.a;
		temp.b=b+c2.b;
		return(temp);
	}
	void showdata()
	{
		cout<<a<<" "<<b<<endl;
	}
};
int main()
{
	complex c1,c2,c3;
	c1.setdata(3,4);
	c2.setdata(5,7);
	c3=c1+c2;
	c3.showdata();
	return(0);
}
