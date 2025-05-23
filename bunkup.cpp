#include <iostream>
#include <vector>
using namespace std;
class person
{
    public:
    string name;
    string pancard_number;
    person (string person_name,string pancardnumber)
    {
        name=person_name;
        pancard_number=pancardnumber;
    }
    void display_details()
    {
        cout<< "person name is :" << name << endl;
        cout << "person pancardnumber is :" << pancard_number << endl;
        cout << "=============================" << endl;    
    
    }
};
int main()
{
    string name,pancard;
    vector<person> list_of_users;
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
             cout << "enter the name for" << ":" << endl;
             cin >> name;
             cout << "enter the pancard"  << ":" << endl;
             cin >> pancard;
             list_of_users.push_back(person(name,pancard));
             break;
        case 2:
             cout << "list all the users" << endl;
             for(person user : list_of_users)
             {
                user.display_details();
             }
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