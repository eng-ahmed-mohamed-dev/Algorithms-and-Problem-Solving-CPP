#include <iostream>
#include <string>

 using namespace std;

string ReadString()
{
	string str = "";
	cout << "Please Enter Your String? \n";
	getline(cin, str);
	return str;
}

void PrintFirstLetterOfEachWord(string Str)
{
	bool IsFirstLetter = true;

	cout << "\nFirst Letters of this string: \n";

	for (short i = 0; i < Str.length(); i++)
	{
		if (Str[i] != ' ' && IsFirstLetter)
		{
			cout << Str[i] << endl;
		}

		IsFirstLetter = (Str[i] == ' ' ? true : false);
	}	
}

int main()
{
	PrintFirstLetterOfEachWord(ReadString());
	
	return 0;
}