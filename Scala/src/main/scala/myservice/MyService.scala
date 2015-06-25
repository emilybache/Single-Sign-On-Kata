package myservice

import sso.Request;
import sso.Response;
import sso.SingleSignOnRegistry;


class MyService(singleSignOnRegistry: SingleSignOnRegistry) {

  def handleRequest(request: Request): Response = {
    Response(s"hello ${request.name}!")
  }
}
