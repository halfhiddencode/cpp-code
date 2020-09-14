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
	operator int()
	{
		return(a);
	}
	void showdata()
	{
		cout<<a<<" "<<b<<endl;
	}
};
int main()
{
	complex c1;
	int x;
	c1.setdata(7,4);
	x=c1; //if you want change class to premitive then use operator keyword and type of premitive 
	//just like that operator int()
	//operator float() it depend upon which type x is;
	c1.showdata();
	cout<<x<<endl;
}




