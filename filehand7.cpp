#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("hallnknight.dat",ios::ate|ios::app);
	cout<<fout.tellp();
	cout<<fout.tellp()<<endl;
	//fout.seekp(4);
	cout<<fout.tellp()<<endl;
	fout.seekp(-2,ios_base::end);//2 step from begning
	//fout.seekp(2,ios_base::cur);//2 step from current location
	//fout.seekp(-2,ios_base::end);//2 step from end
	fout<<"hiavinash";
	fout.close();
}
