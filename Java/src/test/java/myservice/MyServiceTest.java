package myservice;

import static org.junit.Assert.*;

import org.junit.Test;

import sso.Request;
import sso.Response;


public class MyServiceTest {

	@Test
	public void foo() {
		MyService service = new MyService();
		Response response = service.handleRequest(new Request("Foo", null));
		assertEquals("hello Foo!", response.getText());
	}
}
