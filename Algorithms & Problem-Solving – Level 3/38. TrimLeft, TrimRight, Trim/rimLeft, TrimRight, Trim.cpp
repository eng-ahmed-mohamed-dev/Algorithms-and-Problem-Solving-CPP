#include <iostream>
#include <string>

 using namespace std;

string ReadString()
{
	string Str = " ";
	cout << "\nPlease Enter Your String? \n";
	getline(cin, Str);
	return Str;
}

string TrimLeft(string Str)
{
	for (short i = 0; i < Str.length(); i++)
	{
		if (Str[i] != ' ')
		{
			return Str.substr(i, Str.length() - i);
		}
	}

	return "";
}

string TrimRight(string Str)
{
	for (short i = Str.length() - 1; i >= 0 ; i--)
	{
		if (Str[i] != ' ')
		{
			return Str.substr(0, i + 1);
		}
	}

	return "";
}

string Trim(string Str)
{
	return TrimLeft(TrimRight(Str));
}

int main()
{
	string Str = ReadString();
	cout << "\nString     = " << Str << endl;

	cout << "\nTrim Left  = " << TrimLeft(Str) << endl;
	cout << "Trim Right = " << TrimRight(Str) << endl;
	cout << "Trim       = " << Trim(Str) << endl;

	return 0;
}