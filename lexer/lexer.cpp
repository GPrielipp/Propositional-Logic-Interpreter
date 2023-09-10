#include "lexer.hpp"

/* Lexer */

void Lexer::advance()
{
}

Lexer::Lexer(std::string filename)
{
}

std::vector<Token> Lexer::lex()
{
    return std::vector<Token>();
}

/* Token */

Token::Token(int pos, token tok, std::string val)
{
}

std::string Token::value()
{
    return std::string();
}
