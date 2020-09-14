#include<iostream>
using namespace std;
class account
{
	private:
	int balance;
	static float roi ;
	public:
	/*void setbalance(int b)
	{
		balance=b;
	}
	void setroi(float r)
	{
		roi=r;
	}
	*/
	 void display()
	{
		cout<<endl<<roi<<endl;
	}
};
float account:: roi=4.5f;
int main()
{
	account a1;
	a1.display();
	return(0);
}
