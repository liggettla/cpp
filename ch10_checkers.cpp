#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

void printBoard(string pieces[8][8])
{
        cout << "  _ _ _ _ _ _ _ _\n";
        cout << "8|" << pieces[0][7] << " " << pieces[1][7] << " " << pieces[2][7] << " " << pieces[3][7] << " " << pieces[4][7] << " " << pieces[5][7] << " " << pieces[6][7] << " " << pieces[7][7] << "|\n";
        cout << "7|" << pieces[0][6] << " " << pieces[1][6] << " " << pieces[2][6] << " " << pieces[3][6] << " " << pieces[4][6] << " " << pieces[5][6] << " " << pieces[6][6] << " " << pieces[7][6] <<    "|\n";
        cout << "1|" << pieces[0][5] << " " << pieces[1][5] << " " << pieces[2][5] << " " << pieces[3][5] << " " << pieces[4][5] << " " << pieces[5][5] << " " << pieces[6][5] << " " << pieces[7][5] <<    "|\n";
        cout << "1|" << pieces[0][4] << " " << pieces[1][4] << " " << pieces[2][4] << " " << pieces[3][4] << " " << pieces[4][4] << " " << pieces[5][4] << " " << pieces[6][4] << " " << pieces[7][4] <<    "|\n";
        cout << "1|" << pieces[0][3] << " " << pieces[1][3] << " " << pieces[2][3] << " " << pieces[3][3] << " " << pieces[4][3] << " " << pieces[5][3] << " " << pieces[6][3] << " " << pieces[7][3] <<    "|\n";
        cout << "1|" << pieces[0][2] << " " << pieces[1][2] << " " << pieces[2][2] << " " << pieces[3][2] << " " << pieces[4][2] << " " << pieces[5][2] << " " << pieces[6][2] << " " << pieces[7][2] <<    "|\n";
        cout << "2|" << pieces[0][1] << " " << pieces[1][1] << " " << pieces[2][1] << " " << pieces[3][1] << " " << pieces[4][1] << " " << pieces[5][1] << " " << pieces[6][1] << " " << pieces[7][1] <<    "|\n";
        cout << "1|" << pieces[0][0] << " " << pieces[1][0] << " " << pieces[2][0] << " " << pieces[3][0] << " " << pieces[4][0] << " " << pieces[5][0] << " " << pieces[6][0] << " " << pieces[7][0] <<    "|\n";
        cout << " |_ _ _ _ _ _ _ _\n";
        cout << "  1 2 3 4 5 6 7 8" << '\n';
}

void initializeBoard(string pieces[8][8])
{
    for(int x=0; x<8; x++)
    {
        cout << x << '\n';
        for(int y=0; y<2; y++)
        {
            pieces[x][y] = "R";
        }

        for(int y=6; y<8; y++)
        {
            pieces[x][y] = "B";
        }

        for(int y=2; y<6; y++)
        {
            pieces[x][y] = " ";
        }
    }
}

int main()
{
    string pieces[8][8];
    initializeBoard(pieces);
    printBoard(pieces);
}
