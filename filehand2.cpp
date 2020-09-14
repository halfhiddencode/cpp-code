#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream in;
	int i=0;
	char c;
	in.open("hallnknight.dat");
	//in>>c;     // >> operator can't print space so we use get()
	c=in.get();
	while(!in.eof())
	{
		cout<<c;
		//in>>c;
		c=in.get();
	}
	//cout<<endl;
	in.close();
}
