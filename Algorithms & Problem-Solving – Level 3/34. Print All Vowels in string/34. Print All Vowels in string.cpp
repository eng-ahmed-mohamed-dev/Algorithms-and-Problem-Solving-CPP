#include <iostream>
#include <string>
#include <cctype>

 using namespace std;

string ReadString()
{
	string Str = " ";
	cout << "\nPlease Enter Your String? \n";
	getline(cin, Str);
	return Str;
}

bool IsVowel(char Letter)
{
	Letter = tolower(Letter);

	return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));
}

void PrintVowels(string Str)
{
	short Counter = 0;

	cout << "\nVowels in string are : ";
	for (short i = 0; i < Str.length(); i++)
	{
		if (IsVowel(Str[i]))
			cout << Str[i] << "   ";
	}
}

int main()
{
	string Str = ReadString();

	PrintVowels(Str);

	return 0;
}