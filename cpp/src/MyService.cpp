

#include "MyService.h"

Response* MyService::handleRequest(Request *request) {
    return new Response("hello " + request->getName() + "!");
}
