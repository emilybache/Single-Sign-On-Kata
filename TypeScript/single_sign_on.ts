export class SSOToken {

}

export class SingleSignOnRegistry {

    //Returns an instance of SSOToken if the credentials are valid
    register_new_session(credentials:string):SSOToken | null {
        return null
    }

    //Returns True if the token refers to a current session
    is_valid(token:SSOToken):boolean {
        return true
    }

    //Remove the given token from current session
    unregister(token:SSOToken) {

    }
}

//check the credentials by accessing LDAP or whatever
function credentials_are_valid(credentials:string):boolean{
    return true
}


