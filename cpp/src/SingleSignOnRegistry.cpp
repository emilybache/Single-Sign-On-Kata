
#include <algorithm>

#include "SingleSignOnRegistry.h"

SSOToken *SingleSignOnRegistry::register_new_session(string &userName, string &password) {
    if (_gateway->credentialsAreValid(userName, password)) {
        auto *token = new SSOToken();
        _validTokens->push_back(token);
        return token;
    }
    return nullptr;
}

bool SingleSignOnRegistry::is_valid(SSOToken* token) {
    return std::find(_validTokens->begin(), _validTokens->end(), token) != _validTokens->end();
}

void SingleSignOnRegistry::unregister(SSOToken *token) {
    _validTokens->erase(std::remove(_validTokens->begin(), _validTokens->end(), token),
                        _validTokens->end());
}
