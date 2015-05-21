#include <iostream>

//a function that demonstrates global variables
int doStuff()
{
    return 2 + 3;
}


//global variables are introduced like other variables
int count_of_function_calls = 0;
void fun ()
{
    //and the global variable is available here
    count_of_function_calls++;
}

int main()
{
    fun();
    fun();
    fun();
    //the global variable is accessible here
    std::cout << "Function fun was called "
    << count_of_function_calls << " times " << "\n";
}
