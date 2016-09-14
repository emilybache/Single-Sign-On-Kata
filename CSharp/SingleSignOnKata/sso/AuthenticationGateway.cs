using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SingleSignOnKata.sso
{
    public interface AuthenticationGateway
    {
        bool credentialsAreValid(String username, String password);
    }
}
