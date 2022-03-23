#include "ApprovalTests.hpp"
#include "doctest/doctest.h"
#include "MyService.h"
#include "SSOToken.h"
#include "Request.h"
#include "Response.h"
#include "SingleSignOnRegistry.h"

using namespace  std;

TEST_CASE ("MyService") {
    SUBCASE("valid token is accepted") {
        auto *gateway = new AuthenticationGateway();
        auto registry = new SingleSignOnRegistry(gateway);
        auto service = new MyService(registry);
        string userName = "username";
        string password = "password";
        auto token = registry->register_new_session(userName, password);

        auto response = service->handleRequest(new Request("Name", token));

        REQUIRE("hello Name!" == response->getText());
    }

}


