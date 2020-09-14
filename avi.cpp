#include<iostream>
using namespace std;
int add(int,int);
int main()
{
	int a,b,sum;
	cout<<"enter two no."<<endl;
	cin>>a>>b;
	sum=add(a,b);
	cout<<endl<<"sum is"<<sum;
	return(0);
}
int add(int x,int y)
{
	return(x+y);
}
