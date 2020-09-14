#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream out;
	out.open("hallnknight.dat");
	out<<("hallnknightavi");
	out.close();
	return 0;
}
