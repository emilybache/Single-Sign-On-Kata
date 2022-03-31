from unittest.mock import MagicMock

from my_service import *


class SpySingleSignOnRegistry:

    def __init__(self, token_is_valid) -> None:
        self.calls = []
        self.token_is_valid = token_is_valid

    def is_valid(self, token):
        self.calls.append("is_valid")
        return self.token_is_valid


def test_valid_sso_token_is_accepted():
    registry = SpySingleSignOnRegistry(token_is_valid=True)
    service = MyService(registry)
    token = SSOToken()

    response = service.handle_request(Request("Foo", token))

    assert "Hello Foo!" == response.text
    assert registry.calls == ["is_valid"]


def test_valid_sso_token_is_accepted_mock_fw():
    registry = SingleSignOnRegistry(None)
    registry.is_valid = MagicMock(return_value=True)
    service = MyService(registry)
    token = SSOToken()

    response = service.handle_request(Request("Foo", token))

    assert "Hello Foo!" == response.text
    registry.is_valid.assert_called_once_with(token)


