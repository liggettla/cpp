#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    //call just once, at the very start
    srand(time(NULL));  //srand uses an input seed to gen rand num
    cout << rand() << '\n';
}
