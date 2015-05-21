#include <iostream>
using namespace std;

void swap1(int left, int right)
{
    int temp = left;
    left = right;
    right = temp;
}

void swap2(int *p_left, int *p_right)
{
    int temp = *p_left;
    *p_left = *p_right;
    *p_right = temp;
}

int main()
{
    int x=1, y=2;
    swap1(x, y);
    cout << x << " " << y << '\n';
    swap2(&x, &y); //unlike above &x and &y are pointers that point to the address of the x and y variables, allowing the original variables to be changed
    cout << x << " " << y << '\n';
}
