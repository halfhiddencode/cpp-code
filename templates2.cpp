#include<iostream>
using namespace std;
template <class x> class arlist
{
	struct ctrblock
	{
		int cap;
		x *arp;
	};
	ctrblock *s;
	public:
	arlist(int a)
	{
		s=new ctrblock;
		s->cap=a;
		s->arp=new x[s->cap];
	}
	void addelement(int index,x data)
	{
		if(index>=0&&index<=s->cap-1)
		{
			s->arp[index]=data;
		}
		else
		{
			cout<<"\narrey index is not valid";
		}
	}
	void viewelement(int index,x &data)
	{
		if(index>=0&&index<=s->cap-1)
		{
			data=s->arp[index];
		}
		else
		{
			cout<<"\narrey index is not valid";
		}
	}
	void viewlist()
	{
		int i;
		for(i=0;i<s->cap;i++)
		{
			cout<<" "<<s->arp[i];
		}
	}
};
int main()
{
	arlist <float> list1(4);
	int data;
	list1.addelement(0,3.2);
	//list1.viewelement(0,data);
	list1.addelement(1,3.89);
	list1.addelement(2,4.2);
	list1.addelement(3,9.2);
	list1.viewlist();
	cout<<"value in the arrey is"<<data;
}








