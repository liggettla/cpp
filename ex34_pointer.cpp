#include <iostream>
using namespace std;

int main()
{
    int x;  //normal integer
    int *p_int; //a pointer to an integer

    p_int = & x; //read it and assign the address of x to p_int

    cout << "Enter a number: ";
    cin >> x; //put a value in x, could also use *p_int here
    cout << *p_int << '\n';

    *p_int = 10;
    cout << x; //outputs 10
}
