<?php

namespace SSO;

class Request
{
    /**
     * @var string
     */
    private $name;

    /**
     * @var SSOToken
     */
    private $token;

    /**
     * @param string $name
     * @param SSOToken $token
     */
    public function __construct($name, SSOToken $token)
    {
        $this->name = $name;
        $this->token = $token;
    }

    /**
     * @return string
     */
    public function getName()
    {
        return $this->name;
    }

    /**
     * @return SSOToken
     */
    public function getToken()
    {
        return $this->token;
    }
}
