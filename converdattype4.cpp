#include<iostream>
using namespace std;
class item
{
	int a,b;
	public:
	void showdata()
	{
		cout<<a<<" "<<b<<endl;
	}
};
class product
{
	int m,n;
	public:
	void setdata(int x,int y)
	{
		m=x; n=y;
	}
	void showdata()
	{
		cout<<m<<" "<<n<<endl;
	}
	operator item ()
	{
		item temp;
		return (temp);
	}
};
int main()
{
	item i1;
	product p1;
	p1.setdata(6,2);
	i1=p1;
	i1.showdata();
	p1.showdata();
}




