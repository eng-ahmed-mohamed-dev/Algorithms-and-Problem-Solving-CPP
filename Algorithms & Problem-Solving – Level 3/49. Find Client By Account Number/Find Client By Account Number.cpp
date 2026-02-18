#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
const string ClientsFileName = "Clients.txt";

struct stClient
{
    string AccountNumber = "";
    string PinCode = "";
    string Name = "";
    string Phone = "";
    double AccountBalance = 0;
};

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

stClient ConvertLineToRecord(string Line, string Seperator = "#//#")
{
    vector <string> vString;
    stClient Client;

    vString = SplitString(Line, Seperator);

    Client.AccountNumber = vString[0];
    Client.PinCode = vString[1];
    Client.Name = vString[2];
    Client.Phone = vString[3];
    Client.AccountBalance = stod(vString[4]);

    return Client;
}

vector <stClient> LoadClientsDataFromFile(string FileName)
{
    vector <stClient> vClients;

    fstream MyFile;
    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line = "";
        stClient Client;

        while (getline(MyFile, Line))
        {
            Client = ConvertLineToRecord(Line);

            vClients.push_back(Client);
        }

        MyFile.close();
    }

    return vClients;
}

string ReadClientAccountNumber()
{
    string AccountNumber = "";

    cout << "\nPlease enter AccountNumber? ";
    cin >> AccountNumber;
    return AccountNumber;
}

bool FindClientByAccountNumber(string AccountNUmber, stClient& Clinet)
{
    vector <stClient> vClinets = LoadClientsDataFromFile(ClientsFileName);

    for (stClient C : vClinets)
    {
        if (C.AccountNumber == AccountNUmber)
        {
            Clinet = C;
            return true;
        }
    }

    return false;
}

void PrintClientCard(stClient Clinet)
{
    cout << "\nThe following are the clinet details:\n";
    cout << "\nAccount Number : " << Clinet.AccountNumber;
    cout << "\nPin Code       : " << Clinet.PinCode;
    cout << "\nName           : " << Clinet.Name;
    cout << "\nPhone          : " << Clinet.Phone;
    cout << "\nAccount Balance: " << Clinet.AccountBalance;
}

int main()
{
    string AccountNumber = ReadClientAccountNumber();
    stClient Clinet;

    if (FindClientByAccountNumber(AccountNumber, Clinet))
    {
        PrintClientCard(Clinet);
    }
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") Not Found!";
    }

    system("pause>0");

    return 0;
}