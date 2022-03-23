

#ifndef SINGLESIGNON_AUTHENTICATIONGATEWAY_H
#define SINGLESIGNON_AUTHENTICATIONGATEWAY_H

#include <string>

using namespace std;

/**
 * Uses something like LDAP to determine if the given credentials are valid
 */
class AuthenticationGateway {
public:
    bool credentialsAreValid(string& username, string& password);
};


#endif //SINGLESIGNON_AUTHENTICATIONGATEWAY_H
