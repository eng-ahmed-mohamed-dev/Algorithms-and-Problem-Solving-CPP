#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithRandomNumber(int arr[3][3], short Rows, short Columns)
{

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			arr[i][j] = RandomNumber(0, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			cout << setw(3) << arr[i][j] << "\t";
		}

		cout << endl;
	}
}

bool IsPalindromeMatrix(int Matrix[3][3], short Rows, short Columns)
{

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns / 2; j++)
		{
			if (Matrix[i][j] != Matrix[i][Columns - 1 - j])
			{
				return false;
			}
		}
	}

	return true;
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];

	FillMatrixWithRandomNumber(Matrix, 3, 3);
	cout << "Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	if (IsPalindromeMatrix(Matrix, 3, 3))
		cout << "\nYES: Matrix is Palindrome";
	else
		cout << "\nNO: Matrix is NOT Palindrome";

	return 0;
}