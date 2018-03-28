// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSBITCOINLIKEOUTPUTLISTCALLBACK_HPP
#define DJINNI_GENERATED_NJSBITCOINLIKEOUTPUTLISTCALLBACK_HPP


#include "../../../../core/src/ledger-core-source-api/api/../../utils/optional.hpp"
#include "../../../../core/src/ledger-core-source-api/api/BitcoinLikeOutput.hpp"
#include "../../../../core/src/ledger-core-source-api/api/Error.hpp"
#include "NJSBitcoinLikeOutputCpp.hpp"
#include <memory>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../../core/src/ledger-core-source-api/api/BitcoinLikeOutputListCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBitcoinLikeOutputListCallback: public Nan::ObjectWrap, public ledger::core::api::BitcoinLikeOutputListCallback {
public:

    static void Initialize(Local<Object> target);
    ~NJSBitcoinLikeOutputListCallback()
    {
        persistent().Reset();
        pers_resolver.Reset();
    };
    NJSBitcoinLikeOutputListCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete
     * @params result optional of type list<T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(const std::experimental::optional<std::vector<std::shared_ptr<BitcoinLikeOutput>>> & result, const std::experimental::optional<Error> & error);

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
#endif //DJINNI_GENERATED_NJSBITCOINLIKEOUTPUTLISTCALLBACK_HPP
