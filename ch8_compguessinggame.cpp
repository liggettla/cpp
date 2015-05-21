//this program picks a number between 1 and 100
//then lets the computer guess the number

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randRange(int low, int high)
{
    return rand() % (high - low + 1) + low; //using remainder function to limit range
}

int solveNumber(int guess, string highlow, int low, int high)
{
    int newguess;

    if(highlow=="low")
    {
        newguess = (high + guess) / 2;
        cout << "My guess is: " << newguess << "\n";
        return newguess;
    }

    else
    {
        newguess = (low + guess) / 2;
        cout << "My guess is: " << newguess << "\n";
        return newguess;
    }
}

int main()
{
    int high;
    int low;
    int answer;
    int guess=0;
    string highlow;

    low=0;
    high=100;

    cout << "Input lower range: \n";
    cin >> low;
    cout << "Input upper range: \n";
    cin >> high;

    srand(time(NULL));  //sets random seed based on date 1/1/70
    answer = randRange(low,high);
//    cout << "Input answer: \n";
//    cin >> answer;
    cout << "This is the answer: " << answer << '\n';
    
    while(answer!=guess)
    {
        if(guess<answer)
        {
            highlow="low";
            low=guess;
        }

        if(guess>answer)
        {
            highlow="high";
            high=guess;
        }

        guess = solveNumber(guess,highlow,low,high);
    }
    cout << "I solved the puzzle, the answer is: " << guess << "\n";
}
