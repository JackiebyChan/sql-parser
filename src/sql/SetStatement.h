#ifndef SQLPARSER_SET_STATEMENT_H
#define SQLPARSER_SET_STATEMENT_H

#include "SQLStatement.h"
namespace hsql {
enum SetStmtType { kDefault = -1 , kSetAutocommit };

struct SetStatement : SQLStatement {
    SetStatement(SetStmtType type);
    ~SetStatement() {};

    SetStmtType set_type;
    bool b_autocommit;
};

}// namespace hsql

#endif