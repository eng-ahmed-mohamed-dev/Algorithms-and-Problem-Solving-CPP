#include <iostream>
#include <string>
#include <cctype>

 using namespace std;

char ReadCharacter()
{
	char Letter = ' ';
	cout << "\nPlease Enter a Character? \n";
	cin >> Letter;
	return Letter;
}

bool IsVowel(char Letter)
{
	Letter = tolower(Letter);

	return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));
}

int main()
{
	char Letter = ReadCharacter();

	if (IsVowel(Letter))
		cout << "\nYES Letter \'" << Letter << "\' is Vowel";
	else
		cout << "\nNO Letter \'" << Letter << "\' is NOT Vowel";

	return 0;
}