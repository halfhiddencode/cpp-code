#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("hallnknight.dat");
	cout<<fin.tellg();
	cout<<(char)fin.get();
	cout<<(char)fin.get();
	cout<<(char)fin.get();
	cout<<fin.tellg()<<endl;
	fin.seekg(6);
	cout<<fin.tellg()<<endl;
	//fin.seekg(2,ios_base::beg);//2 step from begning
	//fin.seekg(2,ios_base::cur);//2 step from current location
	//fin.seekg(-2,ios_base::end);//2 step from end
	cout<<(char)fin.get();
	fin.close();
}
