#include<iostream>
using namespace std;
class student
{
	char name [20];
	float marks=0,subn[10];
	int i;
	public:
	void setdata ()
	{
		cout<<"enter name"<<endl;
		cin>>name;
		for(i=0;i<10;i++)
		{
			cout<<i+1<<". enter marks ";
			cin>>subn[i];
		}
	}
	void display ()
	{
		for(i=0;i<10;i++)
		{
			marks=marks+subn[i];
		}
		cout<<"marks of "<<name<<" is "<<marks;
	}
};
int main()
{
	student *sp;     //we can not use DML in class because our type is student .so it always use with object not other data type;
	sp=new student;
	sp -> setdata();
	sp -> display();
	return 0;
}
