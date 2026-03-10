#include <iostream>
#include <string>
#include <cstdio>

 using namespace std;

short ReadYear()
{
	short Year = 0;
	cout << "Please enter a Year? ";
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

short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + (12 * a) - 2;

	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string MonthShortName(short MonthNumber)
{
	string Months[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	return Months[MonthNumber - 1];
}

void PrintMonthCalendar(short Month, short Year)
{
	short Current = DayOfWeekOrder(1, Month, Year);

	short NumberOfDays = NumberOfDaysInMonth(Month, Year);

	printf("\n  _______________%s_______________\n\n", MonthShortName(Month).c_str());

	printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

	short i;
	for (i = 0; i < Current; i++)
		printf("     ");

	for (short j = 1; j <= NumberOfDays; j++)
	{
		printf("%5d", j);

		if (++i == 7)
		{
			i = 0;
			printf("\n");
		}
	}

	printf("\n  _________________________________\n");
}

void PrintYearCalendar(short Year)
{
	printf("\n  _________________________________\n");
	printf("\n\t   Calendar - %d", Year);
	printf("\n  _________________________________\n");

	for (short i = 1; i <= 12; i++)
	{
		PrintMonthCalendar(i, Year);
	}
}

int main()
{
	short Year = ReadYear();
	PrintYearCalendar(Year);

	system("pause>0");
	return 0;
}