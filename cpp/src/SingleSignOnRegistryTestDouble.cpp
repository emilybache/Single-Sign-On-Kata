

#include "SingleSignOnRegistryTestDouble.h"

SSOToken* SingleSignOnRegistryTestDouble::register_new_session(string &userName, string &password) {
    _calls->push_back("register_new_session");
    return new SSOToken();
}

bool SingleSignOnRegistryTestDouble::is_valid(SSOToken* token) {
    _calls->push_back("is_valid");
    return _shouldAcceptToken;
}

void SingleSignOnRegistryTestDouble::unregister(SSOToken* token) {
    _calls->push_back("unregister");
}

const vector<string>& SingleSignOnRegistryTestDouble::getCalls() const {
    return *_calls;
}
