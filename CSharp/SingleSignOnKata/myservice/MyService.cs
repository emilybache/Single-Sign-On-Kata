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
        private SingleSignOnRegistry _registry;

        public MyService(SingleSignOnRegistry registry)
        {
            this._registry = registry;
        }

        public Response HandleRequest(Request request)
        {
            if (!_registry.IsValid(request.getSSOToken()))
            {
                return new Response("Please sign in before calling this service");
            }
            return new Response("hello " + request.getName() + "!");
        }
    }
}
