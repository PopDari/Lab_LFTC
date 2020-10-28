#pragma once

#include "programInternalForm.h"

void ProgramInternalForm::addConstant(int value) {
	Pair pair;
	pair.key = "0";
	pair.value = value;
	this->vectorOfPairs.push_back(pair);
}

void ProgramInternalForm::addVariable(int value) {
	Pair pair;
	pair.key = "1";
	pair.value = value;
	this->vectorOfPairs.push_back(pair);
}

void ProgramInternalForm::addOtherwise(string word) {
	Pair pair;
	pair.key = word;
	pair.value = 0;
	this->vectorOfPairs.push_back(pair);
}