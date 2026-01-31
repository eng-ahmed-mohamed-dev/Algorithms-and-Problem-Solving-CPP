#include <iostream>

 using namespace std;

void PrintFibonacciUsingLoop(int Number)
{
	int FebNumber = 0;
	int Prive2 = 0, Prive1 = 1;
	cout << "1   ";
	for (short i = 2; i <= Number; i++)
	{
		FebNumber = Prive2 + Prive1;
		cout << FebNumber << "    ";
		Prive2 = Prive1;
		Prive1 = FebNumber;
	}
}

int main()
{
	PrintFibonacciUsingLoop(10);

	return 0;
}