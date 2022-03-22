

#ifndef SINGLESIGNON_SINGLESIGNONREGISTRYTESTDOUBLE_H
#define SINGLESIGNON_SINGLESIGNONREGISTRYTESTDOUBLE_H

#include <string>
#include <vector>

#include "ISingleSignOnRegistry.h"

using namespace std;

class SingleSignOnRegistryTestDouble : public ISingleSignOnRegistry {
private:
    bool _shouldAcceptToken;
    vector<string>* _calls;
public:
    explicit SingleSignOnRegistryTestDouble(bool shouldAcceptToken = false): _shouldAcceptToken(shouldAcceptToken) {
        _calls = new vector<string>();
    }

    SSOToken* register_new_session(string& userName, string& password) override;
    bool is_valid(SSOToken* token) override;
    void unregister(SSOToken* token) override;
    const vector<string>& getCalls() const;

};


#endif //SINGLESIGNON_SINGLESIGNONREGISTRYTESTDOUBLE_H
