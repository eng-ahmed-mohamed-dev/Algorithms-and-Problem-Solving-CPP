#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string RemovePunctuationsFromString(string Str)
{
    string Str2 = "";

    for (short i = 0; i < Str.length(); i++)
    {
        if (!ispunct(Str[i]))
        {
            Str2 += Str[i];
        }
    }

    return Str2;
}

int main()
{
    string Str = "Welcome: to, egypt , Egypt is a nice country; it`s amazing.";

	cout << "Origil String\n" << Str;
    cout << "\n\nPunctuations Removed:\n" << RemovePunctuationsFromString(Str);

    return 0;
}