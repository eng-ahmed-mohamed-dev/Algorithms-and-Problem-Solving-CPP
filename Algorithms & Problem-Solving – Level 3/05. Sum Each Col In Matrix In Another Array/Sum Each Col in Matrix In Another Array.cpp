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

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
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

short ColumnSum(int arr[3][3], short Rows, short ColumnNumber)
{
	short Sum = 0;

	for (short i = 0; i <= Rows -1; i++)
	{
		Sum += arr[i][ColumnNumber];
	}

	return Sum;
}

void SumMatrixColumnsInArray(int arr[3][3], int arrSum[3], short Rows, short Columns)
{

	for (short j = 0; j < Columns; j++)
	{
		arrSum[j] = ColumnSum(arr, Rows, j);
	}
}

void PrintColumnsSumArray(int arr[3], short Length)
{
	cout << "\nThe Following are the sum of each col in the matrix: \n";
	for (int i = 0; i < Length; i++)
	{
		cout << " Col " << i + 1 << " Sum = " << arr[i] << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3], arrSum[3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "The Following is a 3*3 random matrix: \n";
	PrintMatrix(arr, 3, 3);

	SumMatrixColumnsInArray(arr, arrSum, 3, 3);

	PrintColumnsSumArray(arrSum, 3);

	return 0;
}