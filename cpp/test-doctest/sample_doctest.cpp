#include "ApprovalTests.hpp"
#include "doctest/doctest.h"
#include "ISingleSignOnRegistry.h"
#include "MyService.h"
#include "SSOToken.h"
#include "Request.h"
#include "Response.h"
#include "SingleSignOnRegistryTestDouble.h"
#include "SingleSignOnRegistry.h"

using namespace  std;

// This code is needed so you can see the contents of the vectors of items when the tests fail
namespace doctest
{
    template <typename T>
    struct StringMaker<vector<T> >
    {
        static String convert(const vector<T>& in) {
            ostringstream oss;

            oss << "[";
            for(typename vector<T>::const_iterator it = in.begin(); it != in.end(); ++it)
                oss << *it << ", ";
            oss << "]";

            return oss.str().c_str();
        }
    };
}

TEST_CASE ("MyService") {
    SUBCASE("valid token is accepted") {
        auto registry = new SingleSignOnRegistryTestDouble(true);
        auto service = new MyService(registry);
        auto token = new SSOToken();
        auto response = service->handleRequest(new Request("Name", token));

        CHECK("hello Name!" == response->getText());
        auto expectedCalls = new vector<string> {"is_valid"};
        CHECK(registry->getCalls() == *expectedCalls);
    }

}


