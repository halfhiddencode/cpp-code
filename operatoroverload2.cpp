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
	void showdata()
	{
		cout<<a<<"  "<<b<<endl;
	}
	complex operator -()
	{
		complex temp;
		temp.a=-a;
		temp.b=-b;
		return(temp);
	}
};
int main()
{
	complex c1,c2;
	c1.setdata(4,5);
	c2=-c1;
	c2.showdata();
	return(0);
}
