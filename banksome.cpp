#include <iostream>
using namespace std;
int main()
{
    int options;
    while(true)
    {
        cout << "choose the option:" << endl;
        cout << "1.create  a account" << endl;
        cout << "2.list all the users" << endl;
        cout << "3.exit the program" << endl;
        cin >> options;
        switch (options)
        {
        case 1:
             cout << "create a account" << endl;
             break;
        case 2:
             cout << "list all the users" << endl;
             break;
        case 3:
             cout << "exit the program" << endl;
             return 0;
             break;     
        default:
             break;
        }
    }
}