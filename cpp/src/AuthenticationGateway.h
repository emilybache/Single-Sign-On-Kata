

#ifndef SINGLESIGNON_AUTHENTICATIONGATEWAY_H
#define SINGLESIGNON_AUTHENTICATIONGATEWAY_H

#include <string>

using namespace std;

/**
 * Uses something like LDAP to determine if the given credentials are valid
 */
class AuthenticationGateway {
public:
    virtual bool credentialsAreValid(string& username, string& password) = 0;
};


#endif //SINGLESIGNON_AUTHENTICATIONGATEWAY_H
