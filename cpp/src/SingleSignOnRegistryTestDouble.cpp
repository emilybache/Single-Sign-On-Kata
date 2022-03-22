

#include "SingleSignOnRegistryTestDouble.h"

SSOToken* SingleSignOnRegistryTestDouble::register_new_session(string &userName, string &password) {
    // TODO
    return new SSOToken();
}

bool SingleSignOnRegistryTestDouble::is_valid(SSOToken token) {
    // TODO
    return false;
}

void SingleSignOnRegistryTestDouble::unregister(SSOToken token) {
 // TODO
}
