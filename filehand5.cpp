#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("abc.txt",ios::app);
	int pos;
	fout<<"how are you";
	pos=fout.tellp();
	cout<<pos;
	fout.close();
}
