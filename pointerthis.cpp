#include<iostream>
using namespace std;
class box
{
	int l,b,h;
	public:
	void setdata(int l,int b,int h)
	{
		this-> l=l;
		this -> b=b;
		this -> h=h;
	}
	void display()
	{
		cout<<l<<" "<<b<<" "<<h<<endl;
	}
};
int main()
{
	box b1;
	b1.setdata(3,4,6);
	b1.display();
	return 0;
}
