#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	short randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithRandomNumbers(short arr[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(short arr[3][3], short Rows, short Columns)
{

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			cout << setw(2) << arr[i][j] << "\t";
		}

		cout << endl;
	}
}

short RowSum(short arr[3][3], short RowNumber, short Columns)
{
	short Sum = 0;
	for (short i = 0; i <= Columns - 1; i++)
	{
		Sum += arr[RowNumber][i];
	}

	return Sum;
}

void PrintEachPowSum(short arr[3][3], short Rows, short Columns)
{
	cout << "The Following are the sum of each row in the matrix:\n";
	for (short i = 0; i < Rows; i++)
	{
		cout << "Row " << i + 1 << " Sum = " << RowSum(arr, i, Columns) << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	short arr[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "The following is a 3*3 random matrix:\n";
	PrintMatrix(arr, 3, 3);

	PrintEachPowSum(arr, 3, 3);

	return 0;
}