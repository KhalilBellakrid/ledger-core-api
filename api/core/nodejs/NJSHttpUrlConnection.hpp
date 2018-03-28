// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

#ifndef DJINNI_GENERATED_NJSHTTPURLCONNECTION_HPP
#define DJINNI_GENERATED_NJSHTTPURLCONNECTION_HPP


#include "../../../../core/src/ledger-core-source-api/api/Error.hpp"
#include "../../../../core/src/ledger-core-source-api/api/HttpReadBodyResult.hpp"
#include <cstdint>
#include <string>
#include <unordered_map>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../../core/src/ledger-core-source-api/api/HttpUrlConnection.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSHttpUrlConnection: public Nan::ObjectWrap, public ledger::core::api::HttpUrlConnection {
public:

    static void Initialize(Local<Object> target);
    ~NJSHttpUrlConnection()
    {
        persistent().Reset();
        njs_impl.Reset();
        njs_impl.Reset();
    };
    NJSHttpUrlConnection(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    /**
     * Gets the HTTP response status code
     * @return The HTTP response status code
     */
    int32_t getStatusCode();

    /**
     * Gets the HTTP response status text
     * @return The HTTP response status text
     */
    std::string getStatusText();

    /**
     * Gets the HTTP response headers
     * @return The HTTP response headers
     */
    std::unordered_map<std::string, std::string> getHeaders();

    /**
     * Reads available HTTP response body. This method will be called multiple times until it returns a empty bytes array.
     * @returns A chunk of the body data wrapped into a HttpReadBodyResult (for error management)
     */
    HttpReadBodyResult readBody();

private:
    /**
     * Gets the HTTP response status code
     * @return The HTTP response status code
     */
    static NAN_METHOD(getStatusCode);

    /**
     * Gets the HTTP response status text
     * @return The HTTP response status text
     */
    static NAN_METHOD(getStatusText);

    /**
     * Gets the HTTP response headers
     * @return The HTTP response headers
     */
    static NAN_METHOD(getHeaders);

    /**
     * Reads available HTTP response body. This method will be called multiple times until it returns a empty bytes array.
     * @returns A chunk of the body data wrapped into a HttpReadBodyResult (for error management)
     */
    static NAN_METHOD(readBody);

    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);
    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSHTTPURLCONNECTION_HPP