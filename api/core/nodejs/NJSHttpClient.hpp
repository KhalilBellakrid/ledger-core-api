// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

#ifndef DJINNI_GENERATED_NJSHTTPCLIENT_HPP
#define DJINNI_GENERATED_NJSHTTPCLIENT_HPP


#include "../cpp/HttpRequest.hpp"
#include "NJSHttpRequestCpp.hpp"
#include <memory>

#include <nan.h>
#include <node.h>
#include "../cpp/HttpClient.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSHttpClient: public Nan::ObjectWrap, public ledger::core::api::HttpClient {
public:

    static void Initialize(Local<Object> target);
    ~NJSHttpClient()
    {
        persistent().Reset();
        njs_impl.Reset();
        njs_impl.Reset();
    };
    NJSHttpClient(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    /**
     *Execute a giver Http request\
     *@param request, HttpRequest object, requestr to execute
     */
    void execute(const std::shared_ptr<HttpRequest> & request);

private:
    /**
     *Execute a giver Http request\
     *@param request, HttpRequest object, requestr to execute
     */
    static NAN_METHOD(execute);

    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);
    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSHTTPCLIENT_HPP
