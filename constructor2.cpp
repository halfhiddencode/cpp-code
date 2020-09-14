#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
	complex(int x,int Y)
	{
		a=x; b=y;
	}
	complex(int k)
	{
		a=k;
	}
	complex()
	{
		cout<<endl<<"hi complex"<<endl;
	}
	void display()
	{
		cout<<a<<" "<<b<<endl;
	}
};
int main()
{
	complex c1(3,4),c2(9),c3;
	c1.display();
	c2.display();
}
