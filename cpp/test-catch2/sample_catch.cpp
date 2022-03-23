#include "ApprovalTests.hpp"
#include "catch2/catch.hpp"

#include "MyService.h"
#include "SSOToken.h"
#include "Request.h"
#include "Response.h"
#include "SingleSignOnRegistryTestDouble.h"


TEST_CASE ("MyService") {
    SECTION("valid token is accepted") {
        auto registry = new SingleSignOnRegistryTestDouble(true);
        auto service = new MyService(registry);
        auto token = new SSOToken();
        auto response = service->handleRequest(new Request("Name", token));

        CHECK("hello Name!" == response->getText());
        auto expectedCalls = new vector<string> {"is_valid"};
        CHECK(registry->getCalls() == *expectedCalls);
    }
}


