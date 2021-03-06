// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSOPERATIONLISTCALLBACK_HPP
#define DJINNI_GENERATED_NJSOPERATIONLISTCALLBACK_HPP


#include "../cpp/../../../../core/src/utils/optional.hpp"
#include "../cpp/Error.hpp"
#include "../cpp/Operation.hpp"
#include "NJSOperationCpp.hpp"
#include <memory>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../cpp/OperationListCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSOperationListCallback: public Nan::ObjectWrap, public ledger::core::api::OperationListCallback {
public:

    static void Initialize(Local<Object> target);
    ~NJSOperationListCallback()
    {
        persistent().Reset();
        pers_resolver.Reset();
    };
    NJSOperationListCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete
     * @params result optional of type list<T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(const std::experimental::optional<std::vector<std::shared_ptr<Operation>>> & result, const std::experimental::optional<Error> & error);

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
#endif //DJINNI_GENERATED_NJSOPERATIONLISTCALLBACK_HPP
