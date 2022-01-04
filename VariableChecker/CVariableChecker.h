#pragma once
#include <iostream>



class CVariableChecker
{

public:

	bool isNumber(int liczba);
	bool isCorrectChar(char wpisany, char oczekiwany);
	bool isTheSameString(std::string wpisany, std::string oczekiwany);
};
