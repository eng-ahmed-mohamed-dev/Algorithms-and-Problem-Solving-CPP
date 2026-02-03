#include <iostream>
#include <string>
#include <cctype>

 using namespace std;

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

char InvertLetterCase(char Letter)
{
	return isupper(Letter) ? tolower(Letter) : toupper(Letter);
}

short CountLetter(string Str, char Letter, bool MatchCase = true)
{
	short Counter = 0;

	for (short i = 0; i < Str.length(); i++)
	{
		if (MatchCase)
		{
			if (Str[i] == Letter)
				Counter++;
		}
		else
		{
			if (tolower(Str[i]) == tolower(Letter))
				Counter++;
		}
	}

	return Counter;
}

int main()
{
	string Str = ReadString();
	char Letter = ReadCharacter();

	cout << "\nLetter \'" << Letter << "\' Count = " << CountLetter(Str, Letter);

	cout << "\nLetter \'" << Letter << "\' Or \'" << InvertLetterCase(Letter) << "\' Count = "
		 << CountLetter(Str, Letter, false);

	return 0;
}