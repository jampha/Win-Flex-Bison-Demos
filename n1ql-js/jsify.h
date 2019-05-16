#pragma once
#include <string>

enum op_code { OK, KWD_ALTER, KWD_BUILD, KWD_CREATE, KWD_DELETE, KWD_DROP, KWD_EXECUTE, KWD_EXPLAIN, KWD_GRANT, KWD_INFER, KWD_INSERT, KWD_MERGE, KWD_PREPARE, KWD_RENAME, KWD_REVOKE, KWD_SELECT, KWD_UPDATE, KWD_UPSERT };
enum lex_op_code { JSIFY, UNILINE_N1QL };
int Jsify(const char* input, std::string *output);
int UniLineN1ql(const char *input, std::string *output);