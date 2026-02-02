#include <iostream>
#include <string>
#include <cctype>

 using namespace std;

char ReadLetter()
{
	char Letter = ' ';
	cout << "Please Enter a Character? \n";
	cin >> Letter;
	return Letter;
}

char invertLettersCase(char Letter)
{
	return isupper(Letter) ? tolower(Letter) : toupper(Letter);
}

int main()
{
	char Letter = ReadLetter();
	
	cout << "\nChar after inverting case: \n";
	Letter = invertLettersCase(Letter);
	cout << Letter << endl;

	return 0;
}