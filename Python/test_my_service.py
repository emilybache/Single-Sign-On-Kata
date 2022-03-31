
from my_service import *
from single_sign_on import AuthenticationGateway


def test_validSSOTokenIsAccepted():
    authentication_gateway = AuthenticationGateway()
    registry = SingleSignOnRegistry(authentication_gateway)
    service = MyService(registry)
    token = registry.register_new_session("username", "password")

    response = service.handle_request(Request("Foo", token))

    assert "Hello Foo!" == response.text

