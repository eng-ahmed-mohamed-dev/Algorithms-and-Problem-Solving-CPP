#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReadString()
{
	string Str = " ";
	cout << "\nPlease Enter Your String? \n";
	getline(cin, Str);
	return Str;
}

vector <string> SplitString(string Str, string Delim = " ")
{
	vector <string> vString;

	short pos = 0;
	string sWord = "";

	while ((pos = Str.find(Delim)) != string::npos)
	{
		sWord = Str.substr(0, pos);
		if (sWord != "")
		{
			vString.push_back(sWord);
		}

		Str.erase(0, pos + Delim.length());
	}

	if (Str != "")
	{
		vString.push_back(Str);
	}

	return vString;
}

string JoinString(vector <string> vString, string Delim = " ")
{
	string Str = "";

	for (string& sWord : vString)
	{
		Str += sWord + Delim;
	}
	
	return  Str.substr(0, Str.length() - Delim.length());
}

int main()
{
	string Str = ReadString();

	cout << "\nVector after join: \n";
	cout << JoinString(SplitString(Str, " "), ",");

	return 0;
}