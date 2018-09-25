using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using SingleSignOnKata.myservice;
using SingleSignOnKata.sso;
using Moq;

namespace UnitTests
{
    [TestClass]
    public class MyServiceTest
    {
        [TestMethod]
        public void ValidSSOTokenIsAccepted()
        {
            // TODO: use a test double for the SingleSignOnRegistry
            SingleSignOnRegistry registry = null;
            MyService service = new MyService(registry);
            SSOToken token = new SSOToken();
            Response response = service.HandleRequest(new Request("Foo", token));
            Assert.AreEqual("hello Foo!", response.GetText());
        }
    }
}
