

#ifndef SINGLESIGNON_MYSERVICE_H
#define SINGLESIGNON_MYSERVICE_H


#include "ISingleSignOnRegistry.h"
#include "Response.h"
#include "Request.h"

class MyService {
private:
    ISingleSignOnRegistry* _registry;

public:
    MyService(ISingleSignOnRegistry* registry): _registry(registry) {}

    Response* handleRequest(Request* request);
};


#endif //SINGLESIGNON_MYSERVICE_H
