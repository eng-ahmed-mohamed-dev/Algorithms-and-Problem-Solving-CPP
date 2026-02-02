#include <iostream>
#include <string>
#include <cctype>

 using namespace std;

enum enWatToCount { CapitalLetters = 1, SmallLetters = 0, All = 2 };

string ReadString()
{
	string Str = " ";
	cout << "Please Enter Your String? \n";
	getline(cin, Str);
	return Str;
}

short CountLetters(string Str, enWatToCount WatToCount = enWatToCount::All)
{
	if (WatToCount == enWatToCount::All)
	{
		return Str.length();
	}

	short Counter = 0;

	for (short i = 0; i < Str.length(); i++)
	{
		if (WatToCount == enWatToCount::CapitalLetters && isupper(Str[i]))
			Counter++;

		if (WatToCount == enWatToCount::SmallLetters && islower(Str[i]))
			Counter++;
	}

	return Counter;
}

short CountCapitalLetters(string Str)
{
	short Counter = 0;

	for (short i = 0; i < Str.length(); i++)
	{
		if (isupper(Str[i]))
		{
			Counter++;
		}
	}

	return Counter;
}

short CountSmallLetters(string Str)
{
	short Counter = 0;

	for (short i = 0; i < Str.length(); i++)
	{
		if (islower(Str[i]))
		{
			Counter++;
		}
	}

	return Counter;
}

int main()
{
	string Str = ReadString();

	cout << "\nString Length = " << Str.length();
	cout << "\nCapital Letters Count = " << CountCapitalLetters(Str);
	cout << "\nSmall Letters Count = " << CountSmallLetters(Str);
	
	cout << "\n\nMethod 2\n\n";

	cout << "String Length = " << CountLetters(Str);
	cout << "\nCapital Letters Count = " << CountLetters(Str, enWatToCount::CapitalLetters);
	cout << "\nSmall Letters Count = " << CountLetters(Str, enWatToCount::SmallLetters);

	return 0;
}