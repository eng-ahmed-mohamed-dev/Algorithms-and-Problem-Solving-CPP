#include <iostream>
#include <string>

using namespace std;

string ReplaceWordInStringUsingBuiltInFunction(string Str, string StringToReplace, string ReplaceTo)
{
    short pos = Str.find(StringToReplace);

    while (pos != string::npos)
    {
        Str = Str.replace(pos, StringToReplace.length(), ReplaceTo);
        pos = Str.find(StringToReplace);
    }

    return Str;
}

int main()
{
    string Str = "Welcome to Egypt , Egypt is a nice country";
    string StringToReplace = "Egypt";
    string ReplaceTo = "USA";

	cout << "\nOrigil String\n" << Str;
    cout << "\n\nString After Replace:\n";
    cout << ReplaceWordInStringUsingBuiltInFunction(Str, StringToReplace, ReplaceTo);

    return 0;
}
