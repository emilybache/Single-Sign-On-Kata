import myservice.MyService
import org.scalatest.{Matchers, FlatSpec}
import sso.{Request, SSOToken, SingleSignOnRegistry}
import org.scalatest.mock.MockitoSugar


class MyServiceTest extends FlatSpec with Matchers with MockitoSugar {

  "MyService" should "reject requests with invalid SSOTokens" in {
    val myService = new MyService(mock[SingleSignOnRegistry])
    val response = myService.handleRequest(Request("Foo", SSOToken("")))
    response.text should not equal("hello Foo!")
  }
}
