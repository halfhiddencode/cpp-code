#include<iostream>
using namespace std;
class person
{
	char name[20];
	int age;
	public:
	virtual void fun()=0; //this is pure virtual function so we can't make person class object;
	//so person class is abstract class;
	//in this case we have to override function fun();
};
class student : public person
{
	public:
	void fun() //i.e. here
	{
		
	}
};
class faculty : public person
{
	public:
	void fun()//i.e. here
	{
		
	}
};
int main()
{
	student s1,s2;
	faculty f1,f2;
}





