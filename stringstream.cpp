#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) 
{
	// Complete this function
   stringstream sso;
   vector<int>out;
   sso<<str;
   int temp;
   char ch;
   while(sso>>temp)
   {
       out.push_back(temp);
       cout<<temp+1<<endl;
       //sso>>ch;
   }
   return out;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

