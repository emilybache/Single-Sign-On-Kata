package sso


trait SingleSignOnRegistry {

  def registerNewSession(username: String, password: String): SSOToken
  def isValid(token: SSOToken): Boolean
  def unregister(token: SSOToken)
}

