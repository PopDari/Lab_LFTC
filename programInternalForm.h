#pragma once

#include <iostream>
#include <vector>
#include "pair.h"
#include "symbolTable.h"

using namespace std;

class ProgramInternalForm {

private:

	vector <Pair> vectorOfPairs;

public:

	void addConstant(int value);

	void addVariable(int value);

	void addOtherwise(string word);

};