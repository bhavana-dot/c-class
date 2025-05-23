#include<iostream>
using namespace std;
int main()
{
    char op;
    int a,b;
    cout << "enter 2 numbers:" << endl;
    cin >> a >> b ;
    cout << "enyer the operation: +,-" << endl;
    cin >> op;
    switch (op)
    {
        case'+':
              cout << a+b << endl;
              break;
        case'-':
              cout << a-b << endl;
              break;
        default:
              cout << "invalid operator";
              break;
    }
}
    