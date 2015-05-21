#include <iostream>
#include <string>
using namespace std;

struct info
{
    string name;
    string address;
    int phone;
};

int main()
{
    info user;
    cout << "Enter your name: " << '\n';
    getline(cin, user.name);    //by using getline spaces can be included in the string
    cout << "Enter your address: " << '\n';
    getline(cin, user.address);
    cout << "Enter your phone #: " << '\n';
    cin >> user.phone;
    cout << "Your name: " << '\n';
    cout << user.name << '\n';
    cout << "Your address: " << '\n';
    cout << user.address << '\n';
    cout << "Your phone #: " << '\n';
    cout << user.phone << '\n';
}
