//this is lexer.h it is header file for lexer.cpp

#ifndef LEXER_H
#define LEXER_H

#include <string>
#include <vector>

using namespace std;

struct Token{
    string type;
    string value;
};

vector<Token> lex(const string& code);

#endif