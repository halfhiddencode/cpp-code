#include<iostream>
using namespace std;
struct book
{
	int id;
	char title [20];
	float price;
	void input()
	{
		cout<<"enter your book detail";
		cin>>id>>title>>price;
	}
	void display()
	{
		cout<<id<<endl<<title<<endl<<price;
	}
};
int main()
{
	book b1,b2;
	b1.input();
	b2=b1;
	b2.display();
	return(0);
}
