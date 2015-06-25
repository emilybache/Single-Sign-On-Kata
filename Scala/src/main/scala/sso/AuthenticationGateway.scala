package sso

/**
 * Uses something like LDAP to determine if the given credentials are valid
 */
trait AuthenticationGateway {
  def credentialsAreValid(username: String, password: String): Boolean
}
