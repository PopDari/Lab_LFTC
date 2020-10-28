#pragma once

#include "scanner.h"
#include <fstream>
#include <string>

bool Scanner::isSeparator(char character) {
	if (character == '[' or character == ']' or character == '(' or character == ')')
		return true;
	if (character == '{' or character == '}' or character == ';' or character == ' ')
		return true;
	return false;
}

void Scanner::readTokenList(string path) {
	ifstream fin(path);
	string token;
	while (fin >> token)
		this->tokenList.push_back(token);
}

void Scanner::scanProgramSource(string path) {
	ifstream fin(path);
	string line;
	while (getline(fin, line)) {
		bool startOfToken = true;
		string token;
		for (int i = 0; i < line.size(); ++i) {
			if (startOfToken) {
				if (this->isSeparator[line[i]]) {
					/*
					*/
				}
			}
			else {
				/*
				*/
			}
		}
	}
}

bool Scanner::isOperator(char character) {
	if (character == '+' or character == '-' or character == '*' or character == '/')
		return true;
	if (character == '<' or character == '>' or character == '=' or character == ' ')
		return true;
	return false;
}
