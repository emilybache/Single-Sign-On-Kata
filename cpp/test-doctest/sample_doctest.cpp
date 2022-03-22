#include "ApprovalTests.hpp"
#include "doctest/doctest.h"
#include "SingleSignOnRegistry.h"
#include "MyService.h"
#include "SSOToken.h"
#include "Request.h"
#include "Response.h"
#include "SingleSignOnRegistryTestDouble.h"


TEST_CASE ("MyService") {
    SUBCASE("valid token is accepted") {
        auto registry = new SingleSignOnRegistryTestDouble(); // TODO: implement the Test Double
        auto service = new MyService(registry);
        auto token = new SSOToken();
        auto response = service->handleRequest(new Request("Name", token));
        REQUIRE("hello Name!" == response->getText());
    }
}


