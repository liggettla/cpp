#include <iostream>
using namespace std;

void playgame()
{
    
}

void loadgame()
{

}

void playmultiplayer()
{

}

int main()
{
    int input;
    cout << "1. Play game\n";
    cout << "2. Load game\n";
    cout << "3. Play multiplayer\n";
    cout << "4. Exit\n";
    cout << "Selection: ";
    cin >> input;

    //switch takes the place of multipe if statements
    switch ( input )
    {
        case 1:
            playgame();
            break;  //if missing the next case also runs
        case 2:
            loadgame();
            break;
        case 3:
            playmultiplayer();
            break;
        case 4:
            cout << "Thank you for playing!\n";
            break;
        default:    //runs if no other condition is met
            cout << "Error, bad input, quitting\n";
            break;
    }
}
