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

short CountVowels(string Str)
{
	short Counter = 0;

	for (short i = 0; i < Str.length(); i++)
	{
		if (IsVowel(Str[i]))
			Counter++;
	}

	return Counter;
}

int main()
{
	string Str = ReadString();

	cout << "\nNumber Of Vowels is : " << CountVowels(Str);

	return 0;
}