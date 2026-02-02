#include <iostream>
#include <string>
#include <cctype>

 using namespace std;

string ReadString()
{
	string str = "";
	cout << "Please Enter Your String? \n";
	getline(cin, str);
	return str;
}

string UpperFirstLetterOfEachWord(string Str)
{
	bool IsFirstLetter = true;

	for (short i = 0; i < Str.length(); i++)
	{
		if (Str[i] != ' ' && IsFirstLetter)
		{
			Str[i] = toupper(Str[i]);
		}

		IsFirstLetter = (Str[i] == ' ' ? true : false);
	}

	return Str;
}

int main()
{
	string Str = ReadString();
	cout << "\nString after conversion:\n";

	Str = UpperFirstLetterOfEachWord(Str);
	cout << Str << endl;

	return 0;
}