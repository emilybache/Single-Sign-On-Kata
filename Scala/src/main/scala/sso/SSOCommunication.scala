package sso

case class SSOToken(uuid: String) {}

case class Request(name: String, token: SSOToken) {}

case class Response(text: String) {}