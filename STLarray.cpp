#include<iostream>
#include<array>
using namespace std;

int main()
{
	array <int,5> dataarray={11,22,33,44,55};
	cout<<dataarray.at(2)<<endl;//if you provide out of range index i.e.  5 it give run time error;
	cout<<dataarray[4]<<endl;//it is also allow;
	cout<<dataarray.front()<<endl;
	cout<<dataarray.back()<<endl;
	dataarray.fill(20);
	cout<<dataarray.front()<<endl;
	cout<<dataarray.back()<<endl;
	array <int,5> dataarray1={1,2,3,4,5};
	dataarray.swap(dataarray1);
	cout<<dataarray.front()<<endl;
	cout<<dataarray.back()<<endl;
	cout<<dataarray1.front()<<endl;
	cout<<dataarray1.back()<<endl;
	cout<<dataarray.size()<<endl;
}




