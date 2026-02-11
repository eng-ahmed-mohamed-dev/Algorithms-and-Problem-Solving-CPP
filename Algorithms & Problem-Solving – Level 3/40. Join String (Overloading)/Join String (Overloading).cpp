#include <iostream>
#include <string>
#include <vector>

using namespace std;

string JoinString(vector <string> vString, string Delim = " ")
{
	string Str = "";

	for (string& sWord : vString)
	{
		Str += sWord + Delim;
	}
	
	return  Str.substr(0, Str.length() - Delim.length());
}

string JoinString(string arrString[], short Length, string Delim = " ")
{
	string Str = "";

	for (short i = 0; i < Length; i++)
	{
		Str += arrString[i] + Delim;
	}

	return  Str.substr(0, Str.length() - Delim.length());
}

int main()
{
	vector <string> vString = { "Ahmed", "Mohamed", "Ali", "Mohamed" };
	string arrString[] = { "Ahmed", "Mohamed", "Ali", "Mohamed" };

	cout << "\nVector after join: \n";
	cout << JoinString(vString, " ");

	cout << "\n\nArray after join : \n";
	cout << JoinString(arrString, 4, " ");

	return 0;
}