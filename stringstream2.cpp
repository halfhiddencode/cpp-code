#include <iostream>
#include <sstream>
using namespace std;
class Student
{
    int a;
    string fn;
    string ln;
    int sd;
    public:
    void set_age(int age)
    {
        a=age;
    }
    void set_standard(int b)
    {
        sd=b;
    }
    void set_first_name(string f)
    {
        fn=f;
    }
    void set_last_name(string l)
    {
        ln=l;
    }
    int get_age()
    {
        return a;
    }
    string get_last_name()
    {
        return ln;
    }
    string get_first_name()
    {
        return fn;
    }
    int get_standard()
    {
        return sd;
    }
    string to_string()
    {
        stringstream sso;
        sso<<a<<","<<fn<<","<<ln<<","<<sd;
        string temp;
        sso>>temp;
        return temp;
    }
};

int main() 
{
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
