
#include <chrono>
#include <thread>

#include "AuthenticationGateway.h"

bool AuthenticationGateway::credentialsAreValid(string &username, string &password) {
    // this code is to simulate a network call to LDAP or similar
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    return (bool)(random() % 2);
}
