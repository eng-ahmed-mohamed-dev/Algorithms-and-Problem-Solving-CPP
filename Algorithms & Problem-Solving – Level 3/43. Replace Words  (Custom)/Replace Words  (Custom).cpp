#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

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

string JoinString(vector <string> vString, string Delim = " ")
{
    string Str = "";

    for (string& sWord : vString)
    {
        Str += sWord + Delim;
    }

    return  Str.substr(0, Str.length() - Delim.length());
}

string ReplaceWordInStringUsingSplit(string Str, string StringToReplace, string ReplaceTo, bool MatchCase = true)
{
    vector <string> vString = SplitString(Str, " ");

    for (string& S : vString)
    {
        if (MatchCase)
        {
            if (S == StringToReplace)
            {
                S = ReplaceTo;
            }
        }
        else
        {
            if (LowerAllString(S) == LowerAllString(StringToReplace))
            {
                S = ReplaceTo;
            }
        }
    }

    return JoinString(vString, " ");
}

int main()
{
    string Str = "Welcome to Egypt , Egypt is a nice country";
    string StringToReplace = "Egypt";
    string ReplaceTo = "USA";

	cout << "Origil String\n" << Str;

    cout << "\n\nReplace With Match Case:\n";
    cout << ReplaceWordInStringUsingSplit(Str, StringToReplace, ReplaceTo);

    cout << "\n\nReplace With dont Match Case:\n";
    cout << ReplaceWordInStringUsingSplit(Str, StringToReplace, ReplaceTo, false);

    return 0;
}
