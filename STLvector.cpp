#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> v1{23,45,67};
	vector<char> v2(20);//initial size of 20
	vector<int> v3(5,10);//10 will be store in all five blocks
	vector<string> v4(3,"hellow");
	for(int i=0;i<3;i++)
	{
		cout<<v1[i]<<endl;
	}
	cout<<v2.capacity()<<endl;
	cout<<v1.capacity()<<endl;
	v1.push_back(8);
	cout<<v1.capacity()<<endl;
	cout<<v1[3];
	for(int i=0;i<v1.size();i++)
	cout<<v1[i];
	v1.back();
	v1.front();
	v1.at(3);
	sort(v1.begin(), v1.end());
	for(int i=0;i<v1.size();i++)
	cout<<v1[i];
	cout<<v1.size();
	v1.clear();
}





