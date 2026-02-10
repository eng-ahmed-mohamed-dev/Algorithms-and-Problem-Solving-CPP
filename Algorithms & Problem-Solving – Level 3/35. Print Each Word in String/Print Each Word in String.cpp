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

void PrintEachWordInString(string Str)
{
	string Delim = " ";

	short pos = 0;
	string sWord = "";
	cout << "\nYour string Words are:\n\n";
	while ((pos = Str.find(Delim)) != string::npos)
	{
		sWord = Str.substr(0, pos);
		if (sWord != "")
		{
			cout << sWord << endl;
		}

		Str.erase(0, pos + Delim.length());
	}

	if (Str != "")
	{
		cout << Str << endl;
	}

}

int main()
{
	PrintEachWordInString(ReadString());

	return 0;
}