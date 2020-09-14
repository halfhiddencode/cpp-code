#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("abc.txt");
	int pos;
	char ch;
	while(!fin.eof())
	{
		pos=fin.tellg(); //tellg give position of charecter in input stream 
		cout<<pos<<" "<<ch<<endl;
		fin>>ch;
	}
}
