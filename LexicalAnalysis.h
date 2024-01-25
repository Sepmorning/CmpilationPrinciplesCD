#include "DataStructure.h"
#include "fstream"
#include "string"
using namespace std;

bool isKeyword(string s) {//ÅÐ¶Ï¹Ø¼ü×Ö
	for (int i = 0; i < keywords.size(); i++) {
		if (s == keywords[i]) { return true; }
	}
	return false;
}

bool isOperator(string s) {//ÅÐ¶ÏÔËËã·û
	for (int i = 0; i < operators.size(); i++) {
		if (s == operators[i]) { return true; }
	}
	return false;
}
bool isBound(string s) {//ÅÐ¶Ï½ç·û
	for (int i = 0; i < boundaries.size(); i++) {
		if (s == boundaries[i]) { return true; }
	}
	return false;
}

string getCode(string& filepath) {
	ifstream file(filepath);
	string code;

	if (!file) {
		cout << "open file error!" << endl;
		return "";
	}
	else {
		string line;
		while (getline(file, line)) {
			code += line + '\n';
		}
		file.close();
	}
	return code;
}

vector <pair<int, string>> lexer(string code) {
	vector<pair<int, string>> tokens;
	pair<int, string> p;
	int i = 0;
	string word;
	while (i < code.length()) {
		int j = i;
		if (isspace(code[j])) {
			while (isspace(code[j]) && j < code.length()) {
				j++;
			}
		}
		else if (isalpha(code[j]) || code[j] == '_') {
			word = "";
			while (isalnum(code[j]) || code[j] == '_') {
				word += code[j];
				j++;
			}
		}
	}
}




