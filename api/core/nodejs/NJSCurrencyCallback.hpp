// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSCURRENCYCALLBACK_HPP
#define DJINNI_GENERATED_NJSCURRENCYCALLBACK_HPP


#include "../../../../core/src/ledger-core-source-api/api/../../utils/optional.hpp"
#include "../../../../core/src/ledger-core-source-api/api/BitcoinLikeNetworkParameters.hpp"
#include "../../../../core/src/ledger-core-source-api/api/Currency.hpp"
#include "../../../../core/src/ledger-core-source-api/api/CurrencyUnit.hpp"
#include "../../../../core/src/ledger-core-source-api/api/Error.hpp"

#include <nan.h>
#include <node.h>
#include "../../../../core/src/ledger-core-source-api/api/CurrencyCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSCurrencyCallback: public Nan::ObjectWrap, public ledger::core::api::CurrencyCallback {
public:

    static void Initialize(Local<Object> target);
    ~NJSCurrencyCallback()
    {
        persistent().Reset();
        pers_resolver.Reset();
    };
    NJSCurrencyCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(const std::experimental::optional<Currency> & result, const std::experimental::optional<Error> & error);

private:
    /**
     * Method triggered when main task complete
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    static NAN_METHOD(onCallback);

    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);
    Nan::Persistent<Promise::Resolver> pers_resolver;
};
#endif //DJINNI_GENERATED_NJSCURRENCYCALLBACK_HPP
