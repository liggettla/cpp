#include <iostream>
#include <cstdlib>
using namespace std;

string a1 = " ";
string a2 = " ";
string a3 = " ";
string b1 = " ";
string b2 = " ";
string b3 = " ";
string c1 = " ";
string c2 = " ";
string c3 = " ";
string piece = " ";
int square = 0;
string currentplayer = "Player 1";

void printboard() 
{
    cout << "---------\n";
    cout << "| " << c1 << " " << c2 << " " << c3 << " |\n";
    cout << "| " << b1 << " " << b2 << " " << b3 << " |\n";
    cout << "| " << a1 << " " << a2 << " " << a3 << " |\n";
    cout << "---------\n";
}

void newgame()
{
    a1 = " ";
    a2 = " ";
    a3 = " ";
    b1 = " ";
    b2 = " ";
    b3 = " ";
    c1 = " ";
    c2 = " ";
    c3 = " ";
}

void player1()
{
    piece = "X";
    cout << "Player 1 Choose a Square: ";
    cin >> square;
}

void player2()
{
    piece = "O";
    cout << "Player 2 Choose a Square: ";
    cin >> square;
}

void checkwinner()
{
    //| a1==piece & b1==piece & c1==piece | c1==piece & c2==piece & c3==piece | a3=piece & b3==piece & c3==piece
    if(a1==piece & a2==piece & a3==piece | 
        a1==piece & b1==piece & c1==piece | 
        c1==piece & c2==piece & c3==piece | 
        a3==piece & b3==piece & c3==piece | 
        a1==piece & b2==piece & c3==piece | 
        a3==piece & b2==piece & c1==piece)
    {
        cout << currentplayer << " Wins!!!!\n";
        exit(-1);   //this is imported from cstdlib
    }
    cout << a1 << a2 << a3 << "\n";
    cout << "checking\n";
}

int main ()
{
    newgame();
    cout << "------------\n";
    cout << "| 7 " << c1 << "8 " << c2 << "9" << c3 << " |\n";
    cout << "| 4 " << b1 << "5 " << b2 << "6" << b3 << " |\n";
    cout << "| 1 " << a1 << "2 " << a2 << "3" << a3 << " |\n";
    cout << "------------\n";


    printboard();
    
    for(int i=0; i<9; i++)
    {
       if(i%2 == 0)
       {
            currentplayer = "Player 1";
            player1();
       }

       if(i%2 == 1)
       {
            currentplayer = "Player 2";
            player2();
       }

       switch(square)
       {
            case 1:
                a1 = piece;
                break;
            case 2:
                a2 = piece;
                break;
            case 3:
                a3 = piece;
                break;
            case 4:
                b1 = piece;
                break;
            case 5:
                b2 = piece;
                break;
            case 6:
                b3 = piece;
                break;
            case 7:
                c1 = piece;
                break;
            case 8:
                c2 = piece;
                break;
            case 9:
                c3 = piece;
                break;
       }
       printboard();
       checkwinner();
    }
}



