#include "iostream"
#include "vector"
using namespace std;

vector<string> keywords = { "auto", "enum", "restrict", "unsigned", "break",
                    "extern", "return", "void", "case", "float",
                    "short", "volatile", "char", "for", "signed",
                    "while", "const", "goto", "sizeof", "_Bool",
                    "continue", "if", "static", "_Complex", "default",
                    "inline", "struct", "_Imaginary", "do", "int",
                    "switch", "double", "long", "typedef", "else",
                    "register", "union", "scanf", "printf", "cin",
                    "cout", "signed"};
vector<string> operators = { "+", "-", "*", "/", "=", "&", "<", ">", "==", "!=", "<=", ">=", "%", "+=", "++", "--", "^", ">>=", "<<=" };
vector<string> boundaries = { "(", ")", "{", "}", ";", ",", "[", "]" };

