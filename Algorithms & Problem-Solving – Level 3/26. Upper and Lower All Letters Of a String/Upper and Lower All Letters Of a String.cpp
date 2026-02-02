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

string UpperAllString(string Str)
{

	for (short i = 0; i < Str.length(); i++)
	{
		if (Str[i] != ' ' )
		{
			Str[i] = toupper(Str[i]);
		}
	}

	return Str;
}

string LowerAllString(string Str)
{

	for (short i = 0; i < Str.length(); i++)
	{
		if (Str[i] != ' ')
		{
			Str[i] = tolower(Str[i]);
		}
	}

	return Str;
}

int main()
{
	string Str = ReadString();
	
	cout << "\nString after Upper: \n";
	Str = UpperAllString(Str);
	cout << Str << endl;

	cout << "\nString after Lower: \n";
	Str = LowerAllString(Str);
	cout << Str << endl;

	return 0;
}