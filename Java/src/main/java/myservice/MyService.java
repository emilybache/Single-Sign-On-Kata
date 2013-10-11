package myservice;

import sso.Request;
import sso.Response;

public class MyService {
    
    public Response handleRequest(Request request) {
        // TODO: check request has a valid SSOToken
        return new Response("hello " + request.getName() + "!");
    }
}
