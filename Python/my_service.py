from single_sign_on import SingleSignOnRegistry, SSOToken


class MyService:
    
    def __init__(self, sso_registry):
        self.sso_registry = sso_registry
    
    def handle_request(self, request):
        if not self.sso_registry.is_valid(request.token):
            return Response("unauthorized")
        return Response("Hello {0}!".format(request.name))


class Request:
    def __init__(self, name, token):
        self.name = name
        self.token = token


class Response:
    def __init__(self, text):
        self.text = text
