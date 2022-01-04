#include "CVariableChecker.h"
#include <string.h>

using namespace std;


int main()
{

	CVariableChecker vc;

	int liczba;
	char znak;
	string napis;

	do
	{
		cout << "Liczba: ";
		cin >> liczba;
	} while (!vc.isNumber(liczba););




	return 0;
}