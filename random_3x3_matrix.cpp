#include <iostream>
#include <iomanip> // For output formatting (setw)
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

/*
 * Algorithm Challenge & Problem Solving
 * Level 3 – Challenge #1
 * 3x3 Random Matrix Generation
 *
 * This program generates a 3x3 matrix filled with random numbers within a specific range and prints it in a clean, formatted layout.
 *
 * This challenge focuses on:
 * - Working with 2D arrays (matrices)
 * - Generating random numbers
 * - Passing arrays to functions
 * - Formatting output professionally
 */

using namespace std;

// Generates a random number between From and To (inclusive)
int RandNumber(int From, int To)
{
    int RandNumber = rand() % (To - From + 1) + From;
    return RandNumber;
}

// Fills a 3x3 matrix with random numbers
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++) // Loop through rows
    {
        for (short j = 0; j < Cols; j++) // Loop through columns
        {
            // Assign a random number between 1 and 100 to each cell
            arr[i][j] = RandNumber(1, 100);
        }
    }
}

// Prints the matrix in a formatted way
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            // setw ensures alignment even when numbers have different digits
            cout << setw(3) << arr[i][j] << "   ";
        }
        cout << endl;
    }
}

int main()
{
    // Seed the random number generator to ensure different results each run
    srand((unsigned)time(NULL));

    int arr[3][3];

    // Fill the matrix before printing to avoid garbage values
    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\nThe Following is a 3x3 Random Matrix:\n\n";

    PrintMatrix(arr, 3, 3);

    return 0;
}
