#include<iostream>
using namespace std;
int main()
{
	int x,y;
	y=&x;
	x=3;
	x++;
	cout<<y<<" "<<x;
}

