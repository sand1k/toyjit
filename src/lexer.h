#ifndef LEXER_H
#define LEXER_H

enum EToken
{
  TOK_VAR,
  TOK_IDENTIFIER,
  TOK_EQUAL,
  TOK_CONST_INT,
  TOK_SEMICOLON,
  TOK_FOR,
  TOK_LEFT_BRACKET,
  TOK_LESS_OR_EQUAL,
  TOK_INCREMENT,
  TOK_RIGHT_BRACKET,
  TOK_LEFT_BRACE,
  TOK_PLUS_EQUAL,
  TOK_MULTIPLY,
  TOK_RIGHT_BRACE,
  TOK_MULTIPLY_EQUAL,
  TOK_MINUS,
  TOK_DOT
};

#endif
