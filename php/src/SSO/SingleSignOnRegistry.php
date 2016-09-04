<?php

namespace SSO;

interface SingleSignOnRegistry
{
    /**
     * @param string $username
     * @param string $password
     * @return SSOToken
     */
    public function registerNewSession($username, $password);

    /**
     * @param SSOToken $token
     * @return boolean
     */
    public function isValid(SSOToken $token);

    /**
     * @param SSOToken $token
     */
    public function unregister(SSOToken $token);
}
