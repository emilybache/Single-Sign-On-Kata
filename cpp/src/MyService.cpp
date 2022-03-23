

#include "MyService.h"

Response* MyService::handleRequest(Request *request) {
    if (!_registry->is_valid(request->getToken())) {
        return new Response("unauthorized");
    }
    return new Response("hello " + request->getName() + "!");
}
