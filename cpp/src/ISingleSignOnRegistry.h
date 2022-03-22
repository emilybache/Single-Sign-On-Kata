

#ifndef SINGLESIGNON_ISINGLESIGNONREGISTRY_H
#define SINGLESIGNON_ISINGLESIGNONREGISTRY_H


#include <string>
#include "SSOToken.h"
#include "AuthenticationGateway.h"

using namespace std;

class ISingleSignOnRegistry {
public:
    virtual SSOToken* register_new_session(string& userName, string& password) = 0;
    virtual bool is_valid(SSOToken* token) = 0;
    virtual void unregister(SSOToken* token) = 0;

};


#endif //SINGLESIGNON_ISINGLESIGNONREGISTRY_H
