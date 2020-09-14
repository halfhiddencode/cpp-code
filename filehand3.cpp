#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream out;
	out.open("hallnknight.dat",ios::binary|ios::out);
	//its take two argument 1st name or path and 2nd
	//ios::in    input/read
	//ios::out    output/write (old content is remove)
	//ios::app    append
	//ios::ate     update
	//ios::binary   binary
	// we also open file more than one mode out.open("hallnknight.dat",ios::out|ios::binary|ios::append);
	//we can not open this file in ios::in because (out) is object of ofstream not ifstream
	out<<"Hhjvchjsd\nrgfdr";
	out.close();
	return (0);
}









