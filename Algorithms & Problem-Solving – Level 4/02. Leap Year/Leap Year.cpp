#include <iostream>

 using namespace std;

short ReadYear()
{
	short Year;
	cout << "Please enter a Year to check? ";
	cin >> Year;
	return Year;
}

bool IsLeapYear(short Year)
{
	return (Year % 400 == 0) || ((Year % 4 == 0) && (Year % 100 != 0));
}

int main()
{
	short Year = ReadYear();

	if (IsLeapYear(Year))
		cout << "\nYas, Year [" << Year << "] is a Leap Year.\n";
	else
		cout << "\nNo, Year [" << Year << "] is Not a Leap Year.\n";

	system("pause>0");
	return 0;
}