#include<iostream>
using namespace std;
class box
{
	int l,b,h;
	public:
	void setdata(int x,int y,int z)
	{
		l=x;
		b=y;
		h=z;
	}
	void display()
	{
		cout<<l<<" "<<b<<" "<<h<<endl;
	}
};
int main()
{
	box *p, b1,b;
	p=&b1;
	//b=p;
	p -> setdata(3,4,6);
	p-> display();
	cout<<p;
	return 0;
}
