#include "CVariableChecker.h"


using namespace std;

bool CVariableChecker::isNumber(int liczba)
{
	if (cin.rdstate())
	{
		cin.clear();
		cin.ignore(250, '\n');
		return false;
	}

	return true;
}