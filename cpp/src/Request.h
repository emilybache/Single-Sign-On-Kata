

#ifndef SINGLESIGNON_REQUEST_H
#define SINGLESIGNON_REQUEST_H


#include <string>
#include "SSOToken.h"

using namespace std;

class Request {
private:
    std::string _name;
    SSOToken* _token;

public:
    Request(const string& name, SSOToken* token): _name(name), _token(token) {}
    string getName();

    SSOToken *getToken();
};


#endif //SINGLESIGNON_REQUEST_H
