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

char ReadCharacter()
{
	char Letter = ' ';
	cout << "\nPlease Enter a Character? \n";
	cin >> Letter;
	return Letter;
}

short CountLetter(char Letter, string Str)
{
	short Counter = 0;

	for (short i = 0; i < Str.length(); i++)
	{
		if (Str[i] == Letter)
			Counter++;
	}

	return Counter;
}

int main()
{
	string Str = ReadString();
	char Letter = ReadCharacter();

	cout << "\nLetter \'" << Letter << "\' Count = " << CountLetter(Letter, Str);

	return 0;
}