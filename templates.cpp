#include<iostream>
using namespace std;
//int big(int,int);
template <class x,class y> 
y big(x a,y b)
{
	if(a>b)
	{
		return(a);
	}
	else
	{
		return(b);
	}
}
int main()
{
	//x p;
	//p=big(3,8);
	cout<<big(3,8)<<endl;
	cout<<big(3,8.09)<<endl;
}



