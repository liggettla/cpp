#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int findSmallestRemainingElement (int array[], int size, int index);
void swap (int array[], int first_index, int second_index);

void sort (int array[], int size)
{
    for( int i=0; i<size; i++)
    {
        int index = findSmallestRemainingElement
        (
           array,
           size,
           i
        );
        swap( array, i, index );
    }
}

void findSmallestRemainingElement
(
    int array[],
    int size,
    int index
)
{
    int val=0;
    int index=0;
    for( int i=0; i<=size; i++)
    {
        x=array[i];
        for( int y=0; y<=size; y++ )
        {
            if( x>array[y] )
            {
                val=array[y];
                index=y;
            }
        }
        array[index]=x;
        array[i]=val;
    }
}
