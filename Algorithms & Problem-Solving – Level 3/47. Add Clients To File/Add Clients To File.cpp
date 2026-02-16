#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

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

stClient ReadNewClient()
{
    stClient Client;

    cout << "Enter Account Number? ";
    getline(cin >> ws, Client.AccountNumber);

    cout << "Enter PinCode? ";
    getline(cin, Client.PinCode);

    cout << "Enter Name? ";
    getline(cin, Client.Name);

    cout << "Enter Phone? ";
    getline(cin, Client.Phone);

    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance;

    return Client;
}

string ConvertRecordToLine(const stClient& Client, string Seperator = "#//#")
{
    string StrLine = "";

    StrLine += Client.AccountNumber + Seperator;
    StrLine += Client.PinCode + Seperator;
    StrLine += Client.Name + Seperator;
    StrLine += Client.Phone + Seperator;
    StrLine += to_string(Client.AccountBalance);

    return StrLine;
}

void AddDataLineToFile(string FileName, string StrDataLine)
{
    fstream MyFile;

    MyFile.open(FileName, ios::out | ios::app);

    if (MyFile.is_open())
    {
        MyFile << StrDataLine << endl;

        MyFile.close();
    }
}

void AddNewClient()
{
    stClient Client;
    Client = ReadNewClient();
    AddDataLineToFile(ClientsFileName, ConvertRecordToLine(Client));
}

void AddClients()
{
    char AddMore = 'Y';
    do
    {
        system("cls");
        cout << "Adding New Client : \n\n";

        AddNewClient();
        cout << "\nClinet Added Successfully, do you want to add more Clinets? ";
        cin >> AddMore;

    } while (toupper(AddMore) == 'Y');
}

int main()
{
    AddClients();

    system("pause>0");

    return 0;
}