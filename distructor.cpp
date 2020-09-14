#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
	~complex()
	{
		cout<<"distructor"<<endl;
	}
};
void fun();
int main()
{
	fun();
	return(0);
}
void fun()
	{
		complex c;
	}
