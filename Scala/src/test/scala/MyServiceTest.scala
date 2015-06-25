import myservice.MyService
import org.scalatest.{Matchers, FlatSpec}
import sso.{Request, SSOToken, SingleSignOnRegistry}

class MyServiceTest extends FlatSpec with Matchers {

  "MyService" should "reject requests with invalid SSOTokens" in {
    val myService = new MyService
    val response = myService.handleRequest(Request("Foo", SSOToken("")))
    response.text should equal("hello Foo!")
  }
}
