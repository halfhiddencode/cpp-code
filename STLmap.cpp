#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,string>customer;
	customer[100]="avi1";
	customer[120]="avi2";
	customer[130]="avi3";
	customer[140]="avi4";
	customer[150]="avi5";
	map<int,string>c{{123,"av2"},{124,"av1"}};
	cout<<customer[100];
	map<int,string>::iterator p= customer.begin();//container class has begin() fun
	while(p!=customer.end())
	{
		cout<<p->second<<endl;
		p++;
	}
	cout<<customer.at(150)<<endl;
	cout<<customer.size()<<endl;
}



