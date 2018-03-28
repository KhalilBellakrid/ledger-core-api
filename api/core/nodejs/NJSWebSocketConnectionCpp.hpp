// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from websocket_client.djinni

#ifndef DJINNI_GENERATED_NJSWEBSOCKETCONNECTION_HPP
#define DJINNI_GENERATED_NJSWEBSOCKETCONNECTION_HPP


#include "../../../../core/src/ledger-core-source-api/api/ErrorCode.hpp"
#include <cstdint>
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../../../../core/src/ledger-core-source-api/api/WebSocketConnection.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSWebSocketConnection: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSWebSocketConnection() {};
    NJSWebSocketConnection(const std::shared_ptr<ledger::core::api::WebSocketConnection> &iWebSocketConnection):_WebSocketConnection(iWebSocketConnection){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::WebSocketConnection> &object);
    static Nan::Persistent<ObjectTemplate> WebSocketConnection_prototype;
    std::shared_ptr<ledger::core::api::WebSocketConnection> getCppImpl(){return _WebSocketConnection;};

private:
    static NAN_METHOD(onConnect);

    static NAN_METHOD(onClose);

    static NAN_METHOD(onMessage);

    static NAN_METHOD(onError);

    static NAN_METHOD(getConnectionId);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::WebSocketConnection> _WebSocketConnection;
};
#endif //DJINNI_GENERATED_NJSWEBSOCKETCONNECTION_HPP
