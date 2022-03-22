#include "ApprovalTests.hpp"
#include "catch2/catch.hpp"

#include "SingleSignOnRegistry.h"
#include "MyService.h"
#include "SSOToken.h"
#include "Request.h"
#include "Response.h"
#include "SingleSignOnRegistryTestDouble.h"


TEST_CASE ("MyService") {
    SECTION("valid token is accepted") {
        auto registry = new SingleSignOnRegistryTestDouble(); // TODO: replace registry with a Test Double
        auto service = new MyService(registry);
        auto token = new SSOToken();
        auto response = service->handleRequest(new Request("Name", token));
        REQUIRE("hello Name!" == response->getText());
    }
}


