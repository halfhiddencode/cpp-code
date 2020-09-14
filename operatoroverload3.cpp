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
	void display()
	{
		cout<<a<<" "<<b<<endl;
	}
	complex operator ++()
	{
		complex temp;
		temp.a=++a;
		temp.b=++b;
		return(temp);
	}
	complex operator ++(int)
	{
		complex temp;
		temp.a=a++;
		temp.b=b++;
		return(temp);
	}
};
int main()
{
	complex c1,c2;
	c1.input(5,4);
	c2=++c1;
	c1.display();
	c2.display();
	c2=c1++;
	c1.display();
	c2.display();
	return(0);
}
