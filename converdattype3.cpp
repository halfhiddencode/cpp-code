#include<iostream>
using namespace std;
class product
{
	int m,n;
	public:
	void setdata(int x,int y)
	{
		m=x; n=y;
	}
	int getm()
	{
		return m;
	}
	int getn()
	{
		return n;
	}
	void showdata()
	{
		cout<<m<<" "<<n<<endl;
	}
};
class item
{
	int a,b;
	public:
	item(product p)
	{
		a=p.getm();//p can call own member fun getm()
		b=p.getn();//p can call own member fun getn()
	}
	void showdata()
	{
		cout<<a<<" "<<b<<endl;
	}
	item()
	{
	
	}
};
//because in product class many thing need to declear first so we transfer whole class first;
/*class product
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
};*/
int main()
{
	item i1;
	product p1;
	p1.setdata(6,2);
	i1=p1;
	i1.showdata();
	p1.showdata();
}
//this is also done with casting operator



