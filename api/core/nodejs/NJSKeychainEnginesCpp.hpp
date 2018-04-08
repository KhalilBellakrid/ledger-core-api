// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#ifndef DJINNI_GENERATED_NJSKEYCHAINENGINES_HPP
#define DJINNI_GENERATED_NJSKEYCHAINENGINES_HPP


#include <memory>

#include <nan.h>
#include <node.h>
#include "../cpp/KeychainEngines.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSKeychainEngines: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSKeychainEngines() {};
    NJSKeychainEngines(const std::shared_ptr<ledger::core::api::KeychainEngines> &iKeychainEngines):_KeychainEngines(iKeychainEngines){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::KeychainEngines> &object);
    static Nan::Persistent<ObjectTemplate> KeychainEngines_prototype;
    std::shared_ptr<ledger::core::api::KeychainEngines> getCppImpl(){return _KeychainEngines;};

private:
    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::KeychainEngines> _KeychainEngines;
};
#endif //DJINNI_GENERATED_NJSKEYCHAINENGINES_HPP
