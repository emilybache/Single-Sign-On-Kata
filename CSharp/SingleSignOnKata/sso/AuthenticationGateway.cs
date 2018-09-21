using System;


namespace SingleSignOnKata.sso
{
    public interface AuthenticationGateway
    {
        bool CredentialsAreValid(String username, String password);
    }
}
