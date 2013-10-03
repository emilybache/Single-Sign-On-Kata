
class SingleSignOnRegistry:
        
    def register_new_session(self, credentials):
        """Returns an instance of SSOToken if the credentials are valid"""
        pass

    def is_valid(self, token):
        """Returns True if the token refers to a current session"""
        pass
        
    def unregister(self, token):
        """Remove the given token from current sessions"""
        pass
      
class SSOToken:
    pass        
        
def credentials_are_valid(credentials):
    """check the credentials by accessing LDAP or whatever"""
    return True