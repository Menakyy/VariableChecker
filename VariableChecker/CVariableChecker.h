#pragma once
#include <iostream>



class CVariableChecker
{

public:

	bool isNumber(int number);
	bool isCorrectChar(char written, char expected);
	bool isTheSameString(std::string written, std::string expected);
	bool isNumberFromRange(int number, int start_range, int end_range);
};
