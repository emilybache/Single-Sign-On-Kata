import random
import time
from dataclasses import dataclass


class SingleSignOnRegistry:

    def __init__(self, authentication_gateway):
        self._authentication_gateway = authentication_gateway
        self._valid_tokens = []

    def register_new_session(self, username, password):
        """Returns an instance of SSOToken if the credentials are valid"""
        if self._authentication_gateway.credentials_are_valid(username, password):
            token = SSOToken()
            self._valid_tokens.append(token)
            return token
        return None

    def is_valid(self, token):
        """Returns True if the token refers to a current session"""
        return token in self._valid_tokens
        
    def unregister(self, token):
        """Remove the given token from current sessions"""
        self._valid_tokens.remove(token)


@dataclass(frozen=True)
class SSOToken:
    pass        


class AuthenticationGateway:
    def credentials_are_valid(self, username, password):
        """Check the credentials by accessing LDAP or whatever.
        This code simulates the effects of that network call
        """
        time.sleep(3)
        return random.choice([True, False])
