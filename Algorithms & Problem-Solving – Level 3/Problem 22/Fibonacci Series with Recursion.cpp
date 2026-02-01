#include <iostream>

using namespace std;

void PrintFibonacciUsingRecursion(int Number, int Prive1, int Prive2)
{
	int FebNumber = 0;

	if (Number > 0)
	{
		FebNumber = Prive2 + Prive1;
		Prive2 = Prive1;
		Prive1 = FebNumber;
		cout << FebNumber << "    ";

		PrintFibonacciUsingRecursion(--Number, Prive1, Prive2);
	}
}

int main()
{
	PrintFibonacciUsingRecursion(10, 0, 1);

	return 0;
}