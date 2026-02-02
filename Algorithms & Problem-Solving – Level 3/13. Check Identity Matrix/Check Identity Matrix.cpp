#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>

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
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			printf(" %0*d\t", 2, arr[i][j]);
		}

		cout << endl;
	}
}

bool IsIdentityMatrix(int Matrix[3][3], short Rows, short Columns)
{
	
	if (Rows != Columns)
	{
		return false;
	}

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			if (i == j && Matrix[i][j] != 1)
			{
				return false;
			}

			if (i != j && Matrix[i][j] != 0)
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

	if (IsIdentityMatrix(Matrix, 3, 3))
		cout << "\nYES: Matrix is Identity.";
	else
		cout << "\nNO: Matrix is NOT Identity.";

	return 0;
}