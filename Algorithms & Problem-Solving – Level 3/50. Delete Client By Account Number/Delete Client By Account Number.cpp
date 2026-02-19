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
    bool MarkForDelete = false;
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

bool FindClientByAccountNumber(string AccountNUmber, vector <stClient>& vClients,stClient& Clinet)
{

    for (stClient C : vClients)
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

string ConvertRecordToLine(stClient Client, string Seperator = "#//#")
{
    string stClientRecord = "";

    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalance);

    return stClientRecord;
}

bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector <stClient>& vClients)
{

    for (stClient& C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            C.MarkForDelete = true;
            return true;
        }   
    }

    return false;
}

vector <stClient> SaveClientsDataToFile(string FileName, vector <stClient> vClients)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);

    if (MyFile.is_open())
    {
        string DataLine = "";

        for (stClient C : vClients)
        {
            if (C.MarkForDelete == false)
            {
                DataLine = ConvertRecordToLine(C);
                MyFile << DataLine << endl;
            }
        }

        MyFile.close();
    }

    return vClients;
}

bool DeleteClientByAccountNumber(string AccountNumber, vector <stClient>& vClients)
{
    stClient Client;
    char Answer = 'n';

    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {
        PrintClientCard(Client);

        cout << "\n\nAre you sure you want delete this client? Y/N ? ";
        cin >> Answer;
        if (Answer == 'Y' || Answer == 'y')
        {
            MarkClientForDeleteByAccountNumber(AccountNumber, vClients);
            SaveClientsDataToFile(ClientsFileName, vClients);

            //Refresh Clients
            vClients = LoadClientsDataFromFile(ClientsFileName);

            cout << "\n\nClient Deleted Successfully.";
            return true;
        }
    }
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") Not Found!";
    }
}

int main()
{
    vector <stClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();;

    DeleteClientByAccountNumber(AccountNumber, vClients);

    system("pause>0");

    return 0;
}