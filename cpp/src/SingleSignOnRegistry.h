

#ifndef SINGLESIGNON_SINGLESIGNONREGISTRY_H
#define SINGLESIGNON_SINGLESIGNONREGISTRY_H

#include <vector>
#include "AuthenticationGateway.h"
#include "SSOToken.h"

using namespace  std;

class SingleSignOnRegistry {
private:
    AuthenticationGateway* _gateway;
    vector<SSOToken*>* _validTokens;
public:
    explicit SingleSignOnRegistry(AuthenticationGateway* gateway): _gateway(gateway) {
        _validTokens = new vector<SSOToken*>();
    }
    SSOToken* register_new_session(string& userName, string& password);
    bool is_valid(SSOToken* token);
    void unregister(SSOToken* token);
};


#endif //SINGLESIGNON_SINGLESIGNONREGISTRY_H
