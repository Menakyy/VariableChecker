#include "CTestsVariableChecker.h"

using namespace std;

void CTestVariableChecker::PrintResults(const char* testName, bool result)
{
	if (result)
	{
		cout << testName << ": OK" << endl;
	}
	else
	{
		cout << testName << ": Fail" << endl;
	}
}

void CTestVariableChecker::RunAllTests()
{
	TestIsNumber();
	TestIsCorrectChar();
	TestIsTheSameString();
	TestIsNumberFromRange();
}

void CTestVariableChecker::TestIsNumber()
{
	bool result = vc.isNumber(123);
	PrintResults("TestIsNumber", result);
}

void CTestVariableChecker::TestIsCorrectChar()
{
	bool result = vc.isCorrectChar('a', 'a');
	PrintResults("TestIsCorrectChar", result);
}

void CTestVariableChecker::TestIsTheSameString()
{
	bool result = vc.isTheSameString("asd","asd");
	PrintResults("TestIsCorrectChar", result);
}

void CTestVariableChecker::TestIsNumberFromRange()
{
	bool result = vc.isNumberFromRange(5, 1, 10);
	PrintResults("TestIsNumberFromRange", result);
}
