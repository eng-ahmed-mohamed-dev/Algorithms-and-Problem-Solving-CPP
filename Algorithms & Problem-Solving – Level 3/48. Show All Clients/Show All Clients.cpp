#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>

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

void PrintClientRecord(stClient Client)
{
    cout << "| " << left << setw(15) << Client.AccountNumber;
    cout << "| " << left << setw(10) << Client.PinCode;
    cout << "| " << left << setw(40) << Client.Name;
    cout << "| " << left << setw(12) << Client.Phone;
    cout << "| " << left << setw(12) << Client.AccountBalance;
}

void PrintAllClientsData(vector <stClient> vClients)
{
    cout << "\n\t\t\t\t\tClint List (" << vClients.size() << ") Client(s).";
    cout << "\n______________________________________________________";
    cout << "________________________________________\n" << endl;

    cout << "| " << left << setw(15) << "Account Number";
    cout << "| " << left << setw(10) << "Pin Code";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Phone";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n______________________________________________________";
    cout << "________________________________________\n" << endl;

    for (stClient& Client : vClients)
    {
        PrintClientRecord(Client);
        cout << endl;
    }

    cout << "\n______________________________________________________";
    cout << "________________________________________\n" << endl;
}

int main()
{
    vector <stClient> vClients = LoadClientsDataFromFile(ClientsFileName);

    PrintAllClientsData(vClients);

    system("pause>0");

    return 0;
}