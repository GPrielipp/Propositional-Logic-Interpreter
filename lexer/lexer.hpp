#ifndef LEXER_HPP
#define LEXER_HPP

#include <string>
#include <fstream>
#include <vector>

/* Tokens Sorted in AST Precedence */
enum class token
{
    // operators
    opnot = 10,
    opand = 20,
    opor = 30,
    opxor,
    opimplies,
    opequal = 40,

    // comment
    comment = 50,
    lcurly,
    rcurly,

    // functions
    func = 60,
    eval,
    lparen,
    rparen,
    lbrack,
    rbrack,

    // variables/other strings
    vars = 70
};

class Token
{
private:
    int m_pos;
    token m_tok;
    std::string m_val;

public:
    Token(int pos, token tok, std::string val);
    std::string value();
};

/* Lexer */
class Lexer
{
private:
    int m_index;
    std::string m_text;
    void advance(); // advance the position

public:
    Lexer(std::string filename);
    std::vector<Token> lex();
};

#endif // LEXER_HPP