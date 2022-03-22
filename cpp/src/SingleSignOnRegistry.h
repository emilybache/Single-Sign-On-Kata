

#ifndef SINGLESIGNON_SINGLESIGNONREGISTRY_H
#define SINGLESIGNON_SINGLESIGNONREGISTRY_H

#include <vector>
#include "ISingleSignOnRegistry.h"

using namespace  std;

class SingleSignOnRegistry : public ISingleSignOnRegistry {
private:
    AuthenticationGateway* _gateway;
    vector<SSOToken*>* _validTokens;
public:
    explicit SingleSignOnRegistry(AuthenticationGateway* gateway): _gateway(gateway) {
        _validTokens = new vector<SSOToken*>();
    }
    SSOToken* register_new_session(string& userName, string& password) override;
    bool is_valid(SSOToken* token) override;
    void unregister(SSOToken* token) override;
};


#endif //SINGLESIGNON_SINGLESIGNONREGISTRY_H
