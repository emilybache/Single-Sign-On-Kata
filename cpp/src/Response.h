

#ifndef SINGLESIGNON_RESPONSE_H
#define SINGLESIGNON_RESPONSE_H

#include <string>
#include <utility>

using namespace std;

class Response {
private:
    string _text;
public:
    string getText();

    explicit Response(string text): _text(std::move(text)) {}
};


#endif //SINGLESIGNON_RESPONSE_H
