#include <iostream>
using namespace std;
class security
{
public:    
    virtual void cctv(int a, int b) = 0;
    virtual void securityguard(int c,int d)=0;
    virtual void dog(int e,int f)=0;
};
class home : public security
{
    public:
         void cctv(int a,int b)override
         {
            cout << a+b << endl;
         }
    public:     
         void securityguard(int c,int d)override
         {
            cout << c+d << endl;
         }
    public:     
         void dog(int e,int f)override
         {
            cout << e+f << endl;
         }
};
int main()
{
    home h1;
    h1.cctv(10,20);
    h1.securityguard(34,56);
    h1.dog(56,98);
}