

#include "Request.h"


string Request::getName() {
    return _name;
}

SSOToken *Request::getToken() {
    return _token;
}
