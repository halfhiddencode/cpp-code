#include<iostream>
int fun(void);
using namespace std;
int main()
{
	cout<<"welcome"<<endl;
	try
	{
		fun();//throgh also write here
		cout<<"in try"<<endl;
	}
	catch(int e)
	{
		cout<<"exception no."<<e<<endl;
	}
	cout<<"last line"<<endl;
}
int fun()
	{
		throw 10;
	}
