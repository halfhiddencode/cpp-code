#include<iostream>
using namespace std;
class dummy
{
	int a,b;
	const int x;
	int &y;
	//you can not inisialize these variable because it present in class
	//if you want to initialize you have to make constructor 
	dummy():a(8),b(4),x(9),y(a)
	{
	
	}
};
int main()
{
	dummy d1;
	return(0);
}
