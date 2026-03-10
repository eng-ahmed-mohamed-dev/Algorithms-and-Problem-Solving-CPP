#include <iostream>
#include <string>
#include <cstdio>

 using namespace std;

short ReadDay()
{
	short Day = 0;
	cout << "Please enter a Day? ";
	cin >> Day;
	return Day;
}

short ReadMonth()
{
	short Month = 0;
	cout << "\nPlease enter a Month? ";
	cin >> Month;
	return Month;
}

short ReadYear()
{
	short Year = 0;
	cout << "\nPlease enter a Year? ";
	cin >> Year;
	return Year;
}

bool IsLeapYear(short Year)
{
	return ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
}

short NumberOfDaysInMonth(short Month, short Year)
{
	if (Month < 1 || Month > 12)
		return 0;

	const short NumberOfDays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

short NumberOfDaysFromTheBeginingOfTheYear(short Days, short Month, short Year)
{
	short TotalDays = 0;

	for (short i = 1; i <= Month - 1; i++)
	{
		TotalDays += NumberOfDaysInMonth(i, Year);
	}

	TotalDays += Days;

	return TotalDays;
}

int main()
{
	short Day   = ReadDay();
	short Month = ReadMonth();
	short Year  = ReadYear();

	printf("\nNumber of Days from the begining of the year is %d",
		  NumberOfDaysFromTheBeginingOfTheYear(Day, Month, Year));

	system("pause>0");
	return 0;
}