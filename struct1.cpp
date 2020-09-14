#include<iostream>
using namespace std;
struct book
{
	int id;
	char name[20];
	float price;
};
book input();
int main()
{
	book b1={29029,"c programing",574.56};
	cout<<b1.id<<endl<<b1.name<<endl<<b1.price;
	book b2,b3;
	b2=input();
	b3=b2;
	cout<<"detail is"<<" "<<b3.id<<" "<<b3.name<<" "<<b3.price;
	return(0);
}
book input()
{
	book b;
	cout<<endl<<"enter book id name price";
	cin>>b.id>>b.name>>b.price;
	return(b);
}
