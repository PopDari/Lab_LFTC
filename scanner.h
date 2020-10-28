#pragma once

#include <iostream>
#include "programInternalForm.h"
#include "symbolTable.h"
#include <vector>

using namespace std;

class Scanner {

private:

	SymbolTable symbolTable;

	ProgramInternalForm programInternalForm;

	vector <string> tokenList;

public:

	void readTokenList(string path);

	void scanProgramSource(string path);

	bool isSeparator(char character);

	bool isOperator(char character);

};