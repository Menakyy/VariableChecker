#pragma once
#include "CVariableChecker.h"

class CTestVariableChecker
{
private:
	CVariableChecker vc;

public:
	void PrintResults(const char* testName, bool result);
	void RunAllTests();
	void TestIsNumber();
	void TestIsCorrectChar();
	void TestIsTheSameString();
};