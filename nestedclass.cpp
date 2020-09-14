#include<iostream>
#include<string.h>
using namespace std;
class student
{
	char name[20];
	int rollno;
	class address
	{
		int houseno;
		char street[20];
		char city[20];
		char state[20];
		int pincode;
		public:
		void setaddress(int h,char *s,char *c,char *st,int p)
		{
			houseno=h;
			strcpy(street,s);
			strcpy(city,c);
			strcpy(state,st);
			pincode=p;
		}
		void showadd()
		{
			cout<<"address"<<endl;
			cout<<houseno<<endl<<street<<endl<<city<<endl;
			cout<<state<<endl<<pincode<<endl;
		}
	};
	address add;
	public:
	void setroll(int r)
	{
		rollno=r;
	}
	void setname(char *n)
	{
		strcpy(name,n);
	}
	void inputaddress(int h,char *s,char *c,char *st,int p)
	{
		add.setaddress(h,s,c,st,p);
	}
	void showdata()
	{
		cout<<name<<endl;
		cout<<rollno<<endl;
		add.showadd();
	}
};
int main()
{
	student s1;
	s1.setroll(24518);
	s1.setname("AVINASH KUMAR");
	s1.inputaddress(53,"imam","obra","bihar",824124);
	s1.showdata();
}






