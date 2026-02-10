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

short CountWords(string Str)
{
	string Delim = " ";
	short pos = 0;
	short Counter = 0;
	string sWord = "";

	while ((pos = Str.find(Delim)) != string::npos)
	{
		sWord = Str.substr(0, pos);
		if (sWord != "")
		{
			Counter++;
		}

		Str.erase(0, pos + Delim.length());
	}

	if (Str != "")
	{
		Counter++;
	}

	return Counter;
}

int main()
{
	string Str = ReadString();

	cout << "\nThe number of words in your string is: ";
	cout << CountWords(Str);

	return 0;
}