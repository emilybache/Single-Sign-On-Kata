package myservice;

import static org.junit.Assert.*;

import org.junit.Test;

import sso.Request;
import sso.Response;
import sso.SSOToken;
import sso.SingleSignOnRegistry;

public class MyServiceTest {

    @Test
    public void validSSOTokenIsAccepted() {
        // TODO: replace registry with a Test Double
        SingleSignOnRegistry registry = null;
        MyService service = new MyService(registry);
        SSOToken token = new SSOToken();
        Response response = service.handleRequest(new Request("Foo", token));
        assertEquals("hello Foo!", response.getText());
    }
}
