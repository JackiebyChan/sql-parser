#ifndef SQLPARSER_SET_STATEMENT_H
#define SQLPARSER_SET_STATEMENT_H

#include "SQLStatement.h"
namespace hsql {
enum SetType { kDefault = -1 , kSetAutocommit };

struct SetStatement : SQLStatement {
    SetStatement(SetType type);
    ~SetStatement() {};

    SetType set_type;
    bool b_autocommit;
};

}// namespace hsql

#endif