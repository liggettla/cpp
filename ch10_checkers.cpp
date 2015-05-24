#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

void printBoard(string pieces[8][8])
{
    //simplify this code

        cout << "  _ _ _ _ _ _ _ _\n";
        cout << "8|" << pieces[0][7] << " " << pieces[1][7] << " " << pieces[2][7] << " " << pieces[3][7] << " " << pieces[4][7] << " " << pieces[5][7] << " " << pieces[6][7] << " " << pieces[7][7] << "|\n";
        cout << "7|" << pieces[0][6] << " " << pieces[1][6] << " " << pieces[2][6] << " " << pieces[3][6] << " " << pieces[4][6] << " " << pieces[5][6] << " " << pieces[6][6] << " " << pieces[7][6] <<    "|\n";
        cout << "6|" << pieces[0][5] << " " << pieces[1][5] << " " << pieces[2][5] << " " << pieces[3][5] << " " << pieces[4][5] << " " << pieces[5][5] << " " << pieces[6][5] << " " << pieces[7][5] <<    "|\n";
        cout << "5|" << pieces[0][4] << " " << pieces[1][4] << " " << pieces[2][4] << " " << pieces[3][4] << " " << pieces[4][4] << " " << pieces[5][4] << " " << pieces[6][4] << " " << pieces[7][4] <<    "|\n";
        cout << "4|" << pieces[0][3] << " " << pieces[1][3] << " " << pieces[2][3] << " " << pieces[3][3] << " " << pieces[4][3] << " " << pieces[5][3] << " " << pieces[6][3] << " " << pieces[7][3] <<    "|\n";
        cout << "3|" << pieces[0][2] << " " << pieces[1][2] << " " << pieces[2][2] << " " << pieces[3][2] << " " << pieces[4][2] << " " << pieces[5][2] << " " << pieces[6][2] << " " << pieces[7][2] <<    "|\n";
        cout << "2|" << pieces[0][1] << " " << pieces[1][1] << " " << pieces[2][1] << " " << pieces[3][1] << " " << pieces[4][1] << " " << pieces[5][1] << " " << pieces[6][1] << " " << pieces[7][1] <<    "|\n";
        cout << "1|" << pieces[0][0] << " " << pieces[1][0] << " " << pieces[2][0] << " " << pieces[3][0] << " " << pieces[4][0] << " " << pieces[5][0] << " " << pieces[6][0] << " " << pieces[7][0] <<    "|\n";
        cout << " |_ _ _ _ _ _ _ _|\n";
        cout << "  1 2 3 4 5 6 7 8" << '\n';
}

void initializeBoard(string pieces[8][8])
{
    for(int x=0; x<8; x++)
    {
        for(int y=0; y<3; y++)
        {
            if(x%2==1 & y==0 | x%2==1 & y==2 | x%2==0 & y==1)
            {
                pieces[x][y] = "R";
            }
            else
            {
                pieces[x][y] = " ";
            }
        }

        for(int y=5; y<8; y++)
        {
            if(x%2==0 & y==5 | x%2==0 & y==7 | x%2==1 & y==6)
            {
                pieces[x][y] = "B";
            }
            else
            {
                pieces[x][y] = " ";
            }
        }

        for(int y=3; y<5; y++)
        {
            pieces[x][y] = " ";
        }
    }
}

bool checkValidMove(string pieces[8][8], int oldx, int oldy, int newx, int newy)
{
    //Make sure destination square is legal
    if(newx%2==1 & newy==0 | newx%2==0 & newy==1 | newx%2==1 & newy==2 | newx%2==0 & newy==3 | newx%2==1 & newy==4 | newx%2==0 & newy==5 | newx%2==1 & newy==6 | newx%2==0 & newy==7)
    {
        //Make sure destination square is empty
        if(pieces[newx][newy] == " ")
        {
            //Only move diagonally 1 square
            if(newx==oldx-1 | newx==oldx+1)
            {
                //Pieces only move ahead 1 square
                if(pieces[oldx][oldy]=="R" & newy==oldy+1 | pieces[oldx][oldy]=="B" & newy==oldy-1)
                {
                    return true;
                }
            }
            //Allow for jumping
            else if(newx==oldx-2 | newx==oldx+2)
            {
                //For Red pieces
                if(pieces[oldx][oldy]=="R")
                {
                    //Make sure a piece can be jumped
                    //And remove jumped piece
                    if(pieces[oldx+1][oldy+1]=="B")
                    {
                        pieces[oldx+1][oldy+1] = " ";
                        return true;
                    }
                    else if(pieces[oldx-1][oldy+1]=="B")
                    {
                        pieces[oldx+1][oldy+1] = " ";
                        return true;
                    }
                }
                //Same for Black Pieces
                else
                {
                    if(pieces[oldx+1][oldy-1]=="R")
                    {
                        pieces[oldx+1][oldy-1] = " ";
                        return true;
                    }
                    else if(pieces[oldx-1][oldy-1]=="R")
                    {
                        pieces[oldx+1][oldy-1] = " ";
                        return true;
                    }
                }
            }
        }
    }
}

void makeaMove(string pieces[8][8])
{
    int oldx;
    int oldy;
    int newx;
    int newy;
    cout << "Pick a Piece to Move: \n" << "x-Coord: \n";
    cin >> oldx;
    oldx = oldx - 1;
    cout << "y-Coord: \n";
    cin >> oldy;
    oldy = oldy - 1;
    cout << "Pick a Destination Square \n" << "x-Coord: \n";
    cin >> newx;
    newx = newx - 1;
    cout << "y-Coord: \n";
    cin >> newy;
    newy = newy - 1;

    //Prevent segmentation fault if position is outside of array coordinates
    if(newx < 9 & newy < 9)
    {
        bool validMove = checkValidMove(pieces, oldx, oldy, newx, newy);

        if(validMove)
        {
            string currentPiece = pieces[oldx][oldy];
            pieces[oldx][oldy] = " ";
            pieces[newx][newy] = currentPiece;

            printBoard(pieces);
        }

        else
        {
            cout << "Invalid Move, Try Again: \n";
            printBoard(pieces);
         }
    }
    
    else
    {
        cout << "Invalid Move, Try Again: \n";
        printBoard(pieces);
    }
}

bool checkEndgame(string pieces[8][8])
{
    bool red = false;
    bool black = false;

    for(int x=0; x<8; x++)
    {
        for(int y=0; y<8; y++)
        {
            if(pieces[x][y] == "R")
            {
                red = true;
            }

            else if(pieces[x][y] == "B")
            {
                black = true;
            }
        }
    }

    if(red & black)
    {
        return true;
    }
    
    else
    {
        return false;
    }
}

int main()
{
    string pieces[8][8];
    initializeBoard(pieces);
    printBoard(pieces);
    
    bool endgame = checkEndgame(pieces);
    while(endgame==true)
    {
        makeaMove(pieces);
        endgame = checkEndgame(pieces);
    }
}
