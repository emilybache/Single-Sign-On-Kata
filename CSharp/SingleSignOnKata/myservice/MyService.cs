using SingleSignOnKata.sso;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SingleSignOnKata.myservice
{
    public class MyService
    {
        private SingleSignOnRegistry registry;

        public MyService(SingleSignOnRegistry registry)
        {
            this.registry = registry;
        }

        public Response handleRequest(Request request)
        {
            // TODO: check request has a valid SSOToken
            return new Response("hello " + request.getName() + "!");
        }
    }
}
