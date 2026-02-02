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

char invertLetterCase(char Str)
{
		return isupper(Str) ? tolower(Str) : toupper(Str);
}

string invertAllStringLetterCase(string Str)
{
	for (short i = 0; i < Str.length(); i++)
	{
		Str[i] = invertLetterCase(Str[i]);
	}

	return Str;
}

int main()
{
	string Str = ReadString();
	
	cout << "\nString after inverting All Letters case: \n";
	Str = invertAllStringLetterCase(Str);
	cout << Str << endl;

	return 0;
}