//
// Created by Gary on 2018.7.4.
//

#ifndef SCANNER_CONSTANTS_H
#define SCANNER_CONSTANTS_H

#include <string>
#include <map>

using namespace std;

//单词属性枚举
enum e_Attributes {
	//错误的单词
	A_LEX_ERROR = 0x100,
	//注释，空格
	A_LEX_COMMENT, A_LEX_SPACE,
	//关键字，标识符
	A_LEX_KEYWORD, A_LEX_IDENTITY,
	//布尔型，字符型，整型，浮点型，字符串
	A_LEX_BOOL, A_LEX_CHAR, A_LEX_INT, A_LEX_REAL, A_LEX_STRING,
	//赋值符和运算并赋值符
	A_LEX_ASSIGN = 0x110,
	//三目条件运算符 ? :
	A_LEX_TERNARY,
	//条件或，条件且，按位或，按位异或，按位与
	A_LEX_OR, A_LEX_AND, A_LEX_OR_BIT, A_LEX_XOR_BIT, A_LEX_AND_BIT,
	//比较运算符 等 和 不等
	A_LEX_EQUAL, A_LEX_COMPARE,
	//移位
	A_LEX_SHIFT,
	//加和减，乘除和取模
	A_LEX_ADD_SUB, A_LEX_MUL_DIV_MOD,
	//自增自减，正负，条件非，按位取反
	A_LEX_HIGH_PRIORITY,
	//界符，中括号，小括号，点
	A_LEX_BOUNDARY,
	//逗号，花括号，分号
	A_LEX_COMMA = 0x120, A_LEX_BRACES, A_LEX_SEMICOLON
};

//程序保留字类别枚举
enum e_KeywordKind {
	//关键字，每个关键字一个类
	K_KEYWORD_ABSTRACT = 0, K_KEYWORD_BOOLEAN, K_KEYWORD_BREAK,
	K_KEYWORD_BYTE, K_KEYWORD_CASE, K_KEYWORD_CATCH, K_KEYWORD_CHAR,
	K_KEYWORD_CLASS, K_KEYWORD_CONST, K_KEYWORD_CONTINUE,
	K_KEYWORD_DEFAULT, K_KEYWORD_DO, K_KEYWORD_DOUBLE, K_KEYWORD_ELSE,
	K_KEYWORD_EXTENDS, K_KEYWORD_FALSE, K_KEYWORD_FINAL, K_KEYWORD_FINALLY,
	K_KEYWORD_FLOAT, K_KEYWORD_FOR, K_KEYWORD_GOTO, K_KEYWORD_IF,
	K_KEYWORD_IMPLEMENTS, K_KEYWORD_IMPORT, K_KEYWORD_INSTANCEOF,
	K_KEYWORD_INT, K_KEYWORD_INTERFACE, K_KEYWORD_LONG, K_KEYWORD_NATIVE,
	K_KEYWORD_NEW, K_KEYWORD_NULL, K_KEYWORD_PACKAGE, K_KEYWORD_PRIVATE,
	K_KEYWORD_PROTECTED, K_KEYWORD_PUBLIC, K_KEYWORD_RETURN, K_KEYWORD_SHORT,
	K_KEYWORD_STATIC, K_KEYWORD_SUPER, K_KEYWORD_SWITCH, K_KEYWORD_SYNCHRONIZED,
	K_KEYWORD_THIS, K_KEYWORD_THROW, K_KEYWORD_THROWS, K_KEYWORD_TRANSIENT,
	K_KEYWORD_TRUE, K_KEYWORD_TRY, K_KEYWORD_VOID, K_KEYWORD_VOLATILE, K_KEYWORD_WHILE,
	//标识符
	K_IDENTITY,
	//空格
	K_SPACE,
	//注释
	K_COMMENT,
	//常量，每一类常量一个类
	K_CONSTANT_INTEGER, K_CONSTANT_REAL, K_CONSTANT_POSITIVE_INTEGER, K_CONSTANT_NEGATIVE_INTEGER,
	K_CONSTANT_POSITIVE_REAL, K_CONSTANT_NEGATIVE_REAL, K_CONSTANT_BOOL, K_CONSTANT_STRING, K_CONSTANT_CHAR,
	K_CONSTANT_HEX_INTEGER, K_CONSTANT_OCT_INTEGER,
	//转义字符，每一个转义符一个类
	K_ESCAPE_OCT_CHAR, K_ESCAPE_HEX_CHAR, K_ESCAPE_SINGLE_QUO,
	K_ESCAPE_BACK_SLASH, K_ESCAPE_CR, K_ESCAPE_LF, K_ESCAPE_FF,
	K_ESCAPE_TAB, K_ESCAPE_BACKSPACE,
	//界符，一个符号一个类
	K_BOUNDARY_BRACES_LEFT = 100, K_BOUNDARY_BRACES_RIGHT, K_BOUNDARY_BRACKET_LEFT,
	K_BOUNDARY_BRACKET_RIGHT, K_BOUNDARY_PARENTHESES_LEFT, K_BOUNDARY_PARENTHESES_RIGHT,
	K_BOUNDARY_COMMA, K_BOUNDARY_PERIOD, K_BOUNDARY_SEMICOLON, K_BOUNDARY,
	//运算符，一个符号一个类(按位与和逻辑与合并，按位或和逻辑或合并，按位异或和逻辑异或合并)
	K_OPR_ASSIGN, K_OPR_ADD, K_OPR_SUB, K_OPR_MUL, K_OPR_DIV, K_OPR_MOD,
	K_OPR_GT, K_OPR_GE, K_OPR_EQU, K_OPR_NEQU, K_OPR_LT, K_OPR_LE,
	K_OPR_AND, K_OPR_OR, K_OPR_NOT,
	K_OPR_AND_BIT, K_OPR_OR_BIT, K_OPR_XOR_BIT, K_OPR_NOT_BIT,
	K_OPR_ADD_ASSIGN, K_OPR_SUB_ASSIGN, K_OPR_MUL_ASSIGN, K_OPR_DIV_ASSIGN, K_OPR_MOD_ASSIGN,
	K_OPR_INC, K_OPR_DEC,
	K_OPR_AND_ASSIGN, K_OPR_OR_ASSIGN, K_OPR_NOT_ASSIGN,
	K_OPR_SHIFT_LEFT, K_OPR_SHIFT_RIGHT, K_OPR_SHIFT_ZERO,
	K_OPR_SHIFT_LEFT_ASSIGN, K_OPR_SHIFT_RIGHT_ASSIGN, K_OPR_SHIFT_ZERO_ASSIGN,
	K_OPR_TERNARY_QUESTION, K_OPR_TERNARY_COLON, K_OPR, K_TABLE_END
};

//关键词对应的char数组
extern char ca_Keyword[100][13];

//语法表达式
extern string sa_Syntex[15];

//LL1分析表
extern int ia_LLONE[9][11];

#endif //SCANNER_CONSTANTS_H
