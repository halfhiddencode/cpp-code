#include<iostream>
namespace myspace
{
	int a;
	int f1();
	class A
	{
		public:
		void fun1();
	};
}
namespace ms=myspace;
using namespace std;
int ms::f1()
{
	cout<<"hello f1"<<endl;
}
void myspace::A::fun1()
{
	cout<<"hello fun1"<<endl;
}
//line 14 to 21 this is defination not use so we have to write like this ::
using namespace ms;
int main()
{
	a=5;
	f1();
	A obj;
	obj.fun1();
}




