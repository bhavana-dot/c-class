#include <iostream>
using namespace std;
class passwordchecker
{
    private:
         int pin;
    public:
         void setPin(int p)
         {
            pin =p;
         }
         void login(int pin_number)
         {
            if(pin == pin_number)
            {
                cout << "loggedin" << endl;
            }
            else
            {
                cout << "wrong pin" << endl;
            }
         }
};
int main()
{
    passwordchecker p1;
    p1.setPin(1324);
    p1.login(2314);
    p1.setPin(34434);
    p1.login(4354);
}
