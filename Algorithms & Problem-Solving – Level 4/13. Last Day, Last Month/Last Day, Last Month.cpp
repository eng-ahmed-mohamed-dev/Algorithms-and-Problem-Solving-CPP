#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

short ReadDay()
{
	short Day = 0;
	cout << "\nPlease enter a Day? ";
	cin >> Day;
	return Day;
}

short ReadMonth()
{
	short Month = 0;
	cout << "Please enter a Month? ";
	cin >> Month;
	return Month;
}

short ReadYear()
{
	short Year = 0;
	cout << "Please enter a Year? ";
	cin >> Year;
	return Year;
}

struct stDate
{
	short Year = 0;
	short Month = 0;
	short Day = 0;
};

stDate ReadFullDate()
{
	stDate Date;

	Date.Day   = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
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

bool IsLastDayInMonth(stDate Data)
{
	return (Data.Day == NumberOfDaysInMonth(Data.Month, Data.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (Month == 12);
}

int main()
{
	stDate Date = ReadFullDate();

	if (IsLastDayInMonth(Date))
		cout << "\nYes, Day is Last Day in Month.";
	else
		cout << "\nNo, Day is Not Last Day in Month.";

	if (IsLastMonthInYear(Date.Month))
		cout << "\nYes, Month is Last Month in Year.";
	else
		cout << "\nNo, Month is Not Last Month in Year.";

	system("pause>0");
	return 0;
}