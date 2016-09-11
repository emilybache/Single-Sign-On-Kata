using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SingleSignOnKata.sso
{
    public interface SingleSignOnRegistry
    {
        SSOToken register_new_session(String userName, String password);
        bool is_valid(SSOToken token);
        void unregister(SSOToken token);
    }
}
