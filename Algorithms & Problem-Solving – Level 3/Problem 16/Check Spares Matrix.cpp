#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
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
			arr[i][j] = RandomNumber(0, 10);
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

short CountNumberInMatrix(int Matrix[3][3], short Number, short Rows, short Columns)
{
	short NumberCount = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			if (Matrix[i][j] == Number)
			{
				NumberCount++;
			}
		}
	}

	return NumberCount;
}

bool IsSparesMatrix(int Matrix[3][3], short Rows, short Columns)
{
	short MatrixSize = Rows * Columns;

	return (CountNumberInMatrix(Matrix, 0, 3, 3) >= (MatrixSize / 2));
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];

	FillMatrixWithRandomNumber(Matrix, 3, 3);
	cout << "Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	if (IsSparesMatrix(Matrix, 3, 3))
		cout << "\nYES: It is Sparse";
	else
		cout << "\nNO: It`s NOT Sparse";

	return 0;
}