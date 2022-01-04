#include "CVariableChecker.h"


using namespace std;

bool CVariableChecker::isNumber(int number)
{
	if (cin.rdstate())
	{
		cin.clear();
		cin.ignore(250, '\n');
		return false;
	}

	return true;
}

bool CVariableChecker::isCorrectChar(char written, char expected)
{
	if (written != expected)
	{
		cin.clear();
		cin.ignore(250, '\n');
		return false;
	}

	return true;
}

bool CVariableChecker::isTheSameString(std::string written, std::string expected)
{
	if (written.compare(expected) != 0)
	{
		cin.clear();
		cin.ignore(250, '\n');
		return false;
	}

	return true;
}

bool CVariableChecker::isNumberFromRange(int number, int start_range, int end_range)
{
	if (number >= start_range && number <= end_range)
	{
		return true;
	}

	return false;
}
