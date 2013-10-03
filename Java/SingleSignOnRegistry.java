
public interface SingleSignOnRegistry {

    SSOToken register_new_session(credentials);
    boolean is_valid(SSOToken token);
    void unregister(SSOToken token);
    
}