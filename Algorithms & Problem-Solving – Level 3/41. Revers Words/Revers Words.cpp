#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReadString()
{
    string Str = "";
    cout << "Please Enter Your String?\n";
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

string ReverseWordsInString(string Str)
{
	vector <string> vString;
	string Str2;

	vString = SplitString(Str, " ");

	vector<string>::iterator iter = vString.end();

	while (iter != vString.begin())
	{
		--iter;

		Str2 += *iter + " ";
	}

	return Str2.substr(0, Str2.length() - 1);
}

int main()
{
    string Str = ReadString();

    cout << "\n\nString after reversing words: \n";
    cout << ReverseWordsInString(Str) << endl;

    return 0;
}