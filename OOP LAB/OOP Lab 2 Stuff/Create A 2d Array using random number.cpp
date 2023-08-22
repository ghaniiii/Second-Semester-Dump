#include <iostream>

#include <stdlib.h>
 
using namespace std;
 
int main()
{
    const int row = 4;
    const int col = 4;
    int arr[row][col];
 
 
    // Generate random numbers
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 10 + 1;
        }
    }
 
    // Print the array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << "\n";
    }
 
    return 0;
}