#include <iostream>
using namespace std;
class student
{
private:
    string name;
    string college ="city engineering college";
public:
     student(string n)
     {
        name = n;
     }
     string getcollege()
     {
        return college;
     }
     void getdetails()
     {
        cout << "Name:" << name << endl;
        cout << "College:" << getcollege() << endl;
     }
};
int main()
{
    student s1("dharani");
    cout << s1.getcollege() << endl;
    s1.getdetails();
}