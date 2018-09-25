package myservice;

import sso.Request;
import sso.Response;
import sso.SingleSignOnRegistry;

public class MyService {
    
    private SingleSignOnRegistry registry;
    
    public MyService(SingleSignOnRegistry registry) {
        this.registry = registry;
    }
    
    public Response handleRequest(Request request) {
        if (!registry.is_valid(request.getSSOToken())) {
            return new Response("Please sign in");
        }

        return new Response("hello " + request.getName() + "!");
    }
}
