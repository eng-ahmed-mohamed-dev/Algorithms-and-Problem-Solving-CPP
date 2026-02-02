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

void PrintMiddleRowOfMatrix(int Matrix[3][3], short Rows, short Columns)
{
		short MiddleRow = Rows / 2;

		for (short j = 0; j < Columns; j++)
		{
			printf(" %0*d\t", 2, Matrix[MiddleRow][j]);
		}
}

void PrintMiddleColOfMatrix(int Matrix[3][3], short Rows, short Columns)
{
	short MiddleColumns = Columns / 2;

	for (short i = 0; i < Rows; i++)
	{
		printf(" %0*d\t", 2, Matrix[i][MiddleColumns]);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];

	FillMatrixWithRandomNumber(Matrix, 3, 3);
	cout << "Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	cout << "Middel Row Of Matrix is: \n";
	PrintMiddleRowOfMatrix(Matrix, 3, 3);

	cout << "\n\nMiddel Columns of Matrix is: \n";
	PrintMiddleColOfMatrix(Matrix, 3, 3);

	return 0;
}