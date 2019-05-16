#include <iostream>
#include <fstream>
#include "jsify.h"

using namespace std;

int main()
{
	ifstream file("G:\\Compiler\\flex+bison\\flex+bison+demo\\n1ql-js\\input.txt");
	string source_code((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());

	const char* input = source_code.c_str();
	string plain_js_code;
	int ret_code = Jsify(input, &plain_js_code);

	switch (ret_code)
	{
	case OK:
		cout << plain_js_code << endl << ret_code;
		break;
	case KWD_SELECT:
		cout << "error: select is a reserved word" << endl << ret_code;;
		break;
	case KWD_CREATE:
		cout << "error: create is a reserved word" << endl << ret_code;;
		break;
	case KWD_UPSERT:
		cout << "error: upsert is a reserved word" << endl << ret_code;;
		break;
	case KWD_INSERT:
		cout << "error: insert is a reserved word" << endl << ret_code;;
		break;
	case KWD_DELETE:
		cout << "error: delete is a reserved word" << endl << ret_code;;
		break;
	case KWD_UPDATE:
		cout << "error: update is a reserved word" << endl << ret_code;;
		break;
	case KWD_MERGE:
		cout << "error: merge is a reserved word" << endl << ret_code;;
		break;
	default:
		cout << "error: using a reserved word" << endl << ret_code;
	}

	return 0;
}