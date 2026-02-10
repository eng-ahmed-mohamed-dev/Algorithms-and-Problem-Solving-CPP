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

int main()
{
	vector <string> vString;

	vString = SplitString(ReadString(), " ");

	cout << "\nTokens = " << vString.size() << endl;

	for (string& Str : vString)
	{
		cout << Str << endl;
	}

	return 0;
}