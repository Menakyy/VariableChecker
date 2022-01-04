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

bool CVariableChecker::isCorrectChar(char wpisany, char oczekiwany)
{
	if (wpisany != oczekiwany)
	{
		cin.clear();
		cin.ignore(250, '\n');
		return false;
	}

	return true;
}

bool CVariableChecker::isTheSameString(std::string wpisany, std::string oczekiwany)
{
	if (wpisany.compare(oczekiwany) != 0)
	{
		cin.clear();
		cin.ignore(250, '\n');
		return false;
	}

	return true;
}
