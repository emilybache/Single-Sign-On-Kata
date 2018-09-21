using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SingleSignOnKata.sso
{
    public class Response
    {
        private String text;

        public Response(String text)
        {
            this.text = text;
        }

        public String GetText()
        {
            return this.text;
        }
    }
}
