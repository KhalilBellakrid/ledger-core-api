// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSCURRENCYLISTCALLBACK_HPP
#define DJINNI_GENERATED_NJSCURRENCYLISTCALLBACK_HPP


#include "../cpp/../../../../core/src/utils/optional.hpp"
#include "../cpp/BitcoinLikeNetworkParameters.hpp"
#include "../cpp/Currency.hpp"
#include "../cpp/CurrencyUnit.hpp"
#include "../cpp/Error.hpp"
#include <vector>

#include <nan.h>
#include <node.h>
#include "../cpp/CurrencyListCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSCurrencyListCallback: public Nan::ObjectWrap, public ledger::core::api::CurrencyListCallback {
public:

    static void Initialize(Local<Object> target);
    ~NJSCurrencyListCallback()
    {
        persistent().Reset();
        pers_resolver.Reset();
    };
    NJSCurrencyListCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete
     * @params result optional of type list<T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(const std::experimental::optional<std::vector<Currency>> & result, const std::experimental::optional<Error> & error);

private:
    /**
     * Method triggered when main task complete
     * @params result optional of type list<T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    static NAN_METHOD(onCallback);

    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);
    Nan::Persistent<Promise::Resolver> pers_resolver;
};
#endif //DJINNI_GENERATED_NJSCURRENCYLISTCALLBACK_HPP
