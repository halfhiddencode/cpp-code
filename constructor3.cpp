#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
	complex(int x,int y)
	{
		a=x; b=y;
	}
	complex(int k)
	{
		a=k;
	}
	complex()
	{
		cout<<endl<<"no parameter"<<endl;
	}
	complex(complex &c) //&c is reference variable not an object if we not use "&" it form a recurtion which give error
	{
		a=c.a; b=c.b;
	}
	void display()
	{
		cout<<a<<" "<<b;
	}
};
int main()
{
	complex c1(5,8),c2(5),c3,c4(c1);
	c4.display();
	return(0);
}



