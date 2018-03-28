// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from secp256k1.djinni

#ifndef DJINNI_GENERATED_NJSSECP256K1_HPP
#define DJINNI_GENERATED_NJSSECP256K1_HPP


#include <cstdint>
#include <memory>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../../core/src/ledger-core-source-api/api/Secp256k1.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSSecp256k1: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSSecp256k1() {};
    NJSSecp256k1(const std::shared_ptr<ledger::core::api::Secp256k1> &iSecp256k1):_Secp256k1(iSecp256k1){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::Secp256k1> &object);
    static Nan::Persistent<ObjectTemplate> Secp256k1_prototype;
    std::shared_ptr<ledger::core::api::Secp256k1> getCppImpl(){return _Secp256k1;};

private:
    /**
     * Generates public key from private key.
     * @param privKey 32 byte private key
     * @param compress get compressed (35 bytes) or uncompressed (65 bytes)
     * @return public key can be compressed (35 bytes starting with 02 or 03) or un compressed (65 bytes starting with 04)
     */
    static NAN_METHOD(computePubKey);

    /**
     * Signs message using a given private key
     * @param privKey 32 bytes private key
     * @param data 32 bytes message to sign
     * @return 32 bytes signed message
     */
    static NAN_METHOD(sign);

    /**
     * Check if message was signed with given signature and public key
     * @param data 32 bytes signed message
     * @param signature 32 bytes signature (generated from private key)
     * @param oubkey 32 bytes public key
     * @return true if message was signed with signature and public key (both issued from same private key)
     */
    static NAN_METHOD(verify);

    static NAN_METHOD(newInstance);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::Secp256k1> _Secp256k1;
};
#endif //DJINNI_GENERATED_NJSSECP256K1_HPP
