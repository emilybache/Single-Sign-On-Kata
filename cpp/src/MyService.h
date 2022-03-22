

#ifndef SINGLESIGNON_MYSERVICE_H
#define SINGLESIGNON_MYSERVICE_H


#include "SingleSignOnRegistry.h"
#include "Response.h"
#include "Request.h"

class MyService {
private:
    SingleSignOnRegistry* _registry;

public:
    MyService(SingleSignOnRegistry* registry): _registry(registry) {}

    Response* handleRequest(Request* request);
};


#endif //SINGLESIGNON_MYSERVICE_H
