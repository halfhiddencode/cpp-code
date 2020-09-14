#include<iostream>
using namespace std;
int main()
{
	int subn,i;
	float *p,total=0;
	cout<<"enter no of subject"<<endl;
	cin>>subn;
	p=new float [subn];
	for(i=0;i<subn;i++)
	{
		cin>>p[i];//we also use { cin << *(p+i) }
	}
	for(i=0;i<subn;i++)
	{
		total=total+p[i];
	}
	cout<<total<<endl;
	return 0;
}
