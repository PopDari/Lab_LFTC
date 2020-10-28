#pragma once

#include "symbolTable.h"

void SymbolTable::addToken(string token) {
	this->vectorOfTokens.push_back(token);
}

bool SymbolTable::contains(string token) {
	for (int i = 0; i < this->vectorOfTokens.size(); ++i)
		if (this->vectorOfTokens[i].compare(token) == 0) {
			return true;
		}
	return false;
}

int SymbolTable::indexOf(string token) {
	for (int i = 0; i < this->vectorOfTokens.size(); ++i)
		if (this->vectorOfTokens[i].compare(token) == 0) {
			return i;
		}
}