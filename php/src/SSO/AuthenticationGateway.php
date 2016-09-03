<?php

namespace SSO;

/**
 * Uses something like LDAP to determine if the given credentials are valid
 */
interface AuthenticationGateway
{
    /**
     * @param string $username
     * @param string $password
     * @return boolean
     */
    public function credentialsAreValid($username, $password);
}
