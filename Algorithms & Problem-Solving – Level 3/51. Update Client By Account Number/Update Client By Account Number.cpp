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
    bool MarkForDlete = false;
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

stClient ChangeClientRecord(string AccountNumber)
{
    stClient Client;

    Client.AccountNumber = AccountNumber;

    cout << "\nEnter PinCode? ";
    getline(cin >> ws, Client.PinCode);
    
    cout << "\nEnter Name? ";
    getline(cin, Client.Name);

    cout << "\nEnter Phone? ";
    getline(cin, Client.Phone);

    cout << "\nEnter AccountBalance? ";
    cin >> Client.AccountBalance;

    return Client;
}

vector <stClient> SaveCleintsDataToFile(string FileName, vector <stClient> vCleints)
{
    fstream MyFile;

    MyFile.open(FileName, ios::out);

    string Dataline;

    if (MyFile.is_open())
    {

        for (stClient C : vCleints)
        {
            if (C.MarkForDlete == false)
            {
                Dataline = ConvertRecordToLine(C);
                MyFile << Dataline << endl;
            }
        }

        MyFile.close();

    }

    return vCleints;
}

bool UpdateClientByAccountNumber(string AccountNumber, vector <stClient>& vClients)
{
    stClient Client;
    char Answer = 'n';

    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {
        PrintClientCard(Client);

        cout << "\n\nAre you sure you want update this client? Y/N ? ";
        cin >> Answer;

        if (Answer == 'Y' || Answer == 'y')
        {
            for (stClient& C : vClients)
            {
                if (C.AccountNumber == AccountNumber)
                {
                    C = ChangeClientRecord(AccountNumber);
                    break;
                }
            }

            SaveCleintsDataToFile(ClientsFileName, vClients);

            cout << "\n\nClient Updated Successfully.";
            return true;
        }
    }
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") Not Found!";
        return false;
    }
}

int main()
{
    vector <stClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();;

    UpdateClientByAccountNumber(AccountNumber, vClients);

    system("pause>0");

    return 0;
}