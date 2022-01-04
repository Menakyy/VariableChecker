#include "CVariableChecker.h"
#include <string.h>

using namespace std;


int main()
{

	CVariableChecker vc;

	int liczba;
	char znak;
	string napis;

	//do
	//{
	//	cout << "Liczba: ";
	//	cin >> liczba;
	//} while (!vc.isNumber(liczba));

	//do
	//{
	//	cout << "Znak: ";
	//	cin >> znak;
	//} while (!vc.isCorrectChar(znak,'a'));

	do
	{
		cout << "Napis: ";
		cin >> napis;
	} while (!vc.isTheSameString(napis, "asd"));


	return 0;
}