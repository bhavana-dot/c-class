#include<iostream>
using namespace std;
class person
{
    public:
    person()
    {
        cout << "hii from const" << endl;
    }
    void hello()
    {
        cout << "hii from method" << endl;
    }
};
int main()
{
    person p1;
    p1.hello();
}