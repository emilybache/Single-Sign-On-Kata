<?php

namespace MyService;

use SSO\Request;

class MyServiceTest extends \PHPUnit_Framework_TestCase
{
    public function testInvalidSSOTokenIsRejected()
    {
        $myService = new MyService(null);
        $response = $myService->handleRequest(new Request("Foo", null));
        $this->assertNotEquals("hello Foo!", $response->getText());
    }
}
