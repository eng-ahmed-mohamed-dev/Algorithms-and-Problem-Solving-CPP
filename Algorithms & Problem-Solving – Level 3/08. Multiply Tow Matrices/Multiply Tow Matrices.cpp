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

void MultiplyMatrix(int Matrix1[3][3], int Matrix2[3][3],
	int MatrixResults[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			MatrixResults[i][j] = Matrix1[i][j] * Matrix2[i][j];
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3], Matrix2[3][3], MatrixResults[3][3];

	FillMatrixWithRandomNumber(Matrix1, 3, 3);
	cout << "Matrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

	FillMatrixWithRandomNumber(Matrix2, 3, 3);
	cout << "\nMatrix2:\n";
	PrintMatrix(Matrix2, 3, 3);

	MultiplyMatrix(Matrix1, Matrix2, MatrixResults, 3, 3);

	cout << "\nResults:\n";
	PrintMatrix(MatrixResults, 3, 3);

	return 0;
}