#include<iostream>
#include<string.h>
using namespace std;
class student
{
	string name;
	int age;
	public:
	void setdata(string s,int a)
	{
		name=s;
		age=a;
	}
	void showdata()
	{
		cout<<"name is "<<name<<endl;
		cout<<"age is "<<age<<endl;
	}
};
int main()
{
	pair<string,int>p1;
	pair<string,string>p2;
	pair<string,float>p3;
	pair<int,student>p4;
	p1=make_pair("Avinash",17);
	p2=make_pair("India","New_Delhi");
	p3=make_pair("drilling c++",257.89);
	student s1;
	s1.setdata("blacksky",56);
	p4=make_pair(87,s1);
	cout<<"pair 1"<<endl;
	cout<<p1.first<<" "<<p1.second<<endl;
	cout<<"pair 2"<<endl;
	cout<<p2.first<<" "<<p2.second<<endl;
	cout<<"pair 3"<<endl;
	cout<<p3.first<<" "<<p3.second<<endl;
	cout<<"pair 4"<<endl;
	cout<<p4.first<<" ";
	//student s2=p4.second;
	s1.showdata();
}






