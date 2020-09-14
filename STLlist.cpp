#include<iostream>
#include<list>
using namespace std;
int main()
{
	list <int> l1{11,22,33,44,55};
	list <string> l2{"india","america","austrelia"};
	l1.remove(44);
	list <int>::iterator p=l1.begin();//acess data from list p is pointer
	while (p!=l1.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	cout<<l1.size()<<endl;
	list <string>::iterator p1=l2.begin();
	while (p1!=l2.end())
	{
		cout<<*p1<<" ";
		p1++;
	}
	cout<<l2.size();
	l2.push_back("bihar");
	l2.push_front("utterpradesh");
	list <string>::iterator p2=l2.begin();
	while (p2!=l2.end())
	{
		cout<<*p2<<" ";
		p2++;
	}
	cout<<l2.size();
}



