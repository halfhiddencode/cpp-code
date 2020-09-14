#include<iostream>
using namespace std;
class complex
{
	int a,*p;
	public:
	complex()
	{
		a=0;
		p=new int;
		*p=0;
	}
	complex(int x,int y)
	{
		a=x;
		p=new int ;
		*p=y;
	}
	void output()
	{
		cout<<a<<" "<<*p<<endl;
	}
};
int main()
{
	complex c1(6,3);
	c1.output();
}





