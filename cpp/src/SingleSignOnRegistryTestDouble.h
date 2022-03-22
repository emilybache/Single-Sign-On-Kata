

#ifndef SINGLESIGNON_SINGLESIGNONREGISTRYTESTDOUBLE_H
#define SINGLESIGNON_SINGLESIGNONREGISTRYTESTDOUBLE_H


#include "SingleSignOnRegistry.h"

class SingleSignOnRegistryTestDouble : public SingleSignOnRegistry {
public:
    SSOToken* register_new_session(string& userName, string& password) override;
    bool is_valid(SSOToken token) override;
    void unregister(SSOToken token) override;

};


#endif //SINGLESIGNON_SINGLESIGNONREGISTRYTESTDOUBLE_H
