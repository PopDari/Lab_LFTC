#pragma once

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class SymbolTable {

private:

	vector <string> vectorOfTokens;

public:

	void addToken(string token);

	bool contains(string token);

	int indexOf(string token);

};