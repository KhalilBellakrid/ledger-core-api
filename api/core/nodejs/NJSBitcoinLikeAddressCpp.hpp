// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#ifndef DJINNI_GENERATED_NJSBITCOINLIKEADDRESS_HPP
#define DJINNI_GENERATED_NJSBITCOINLIKEADDRESS_HPP


#include "../cpp/../../../../core/src/utils/optional.hpp"
#include "../cpp/BitcoinLikeNetworkParameters.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../cpp/BitcoinLikeAddress.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBitcoinLikeAddress: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSBitcoinLikeAddress() {};
    NJSBitcoinLikeAddress(const std::shared_ptr<ledger::core::api::BitcoinLikeAddress> &iBitcoinLikeAddress):_BitcoinLikeAddress(iBitcoinLikeAddress){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeAddress> &object);
    static Nan::Persistent<ObjectTemplate> BitcoinLikeAddress_prototype;
    std::shared_ptr<ledger::core::api::BitcoinLikeAddress> getCppImpl(){return _BitcoinLikeAddress;};

private:
    /**
     * Gets the version of the address (P2SH or P2PKH)
     * @return The version of the address
     */
    static NAN_METHOD(getVersion);

    /**
     * Gets the raw hash160 of the public key
     * @return The 20 bytes of the public key hash160
     */
    static NAN_METHOD(getHash160);

    /**
     * Gets the network parameters used for serializing the address
     * @return The network parameters of the address
     */
    static NAN_METHOD(getNetworkParameters);

    /**
     * Serializes the hash160 into a Base58 encoded address (with checksum)
     * @return The Base58 serialization
     */
    static NAN_METHOD(toBase58);

    /**
     * Serializes the hash160 to a payment uri (i.e bitcoin:16UwLL9Risc3QfPqBUvKofHmBQ7wMtjvM)
     * @return A payment uri to this address
     * toPaymentUri(): string;
     * Checks if the given address is a P2SH address
     * @return True if the version byte matches the P2SH byte version of the address network parameters
     */
    static NAN_METHOD(isP2SH);

    /**
     * Checks if the given address is a P2PKH address
     * @return True if the version byte matches the P2PKH byte version of the address network parameters
     */
    static NAN_METHOD(isP2PKH);

    /**
     * Gets an optional derivation path (if the address comes from an extended public key)
     * @return The derivation path of the address
     */
    static NAN_METHOD(getDerivationPath);

    /**
     * Deserializes the given address (note that this function will throw an exception wether the address doesn't belong to
     * the given network parameters, or if the address contains invalid Base58 characters or if the checksum is invalid).
     * @return A BitcoinLikeAddress
     */
    static NAN_METHOD(fromBase58);

    /**
     * Check if the given address is valid
     * @return true if the address is valid, false otherwise
     */
    static NAN_METHOD(isAddressValid);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::BitcoinLikeAddress> _BitcoinLikeAddress;
};
#endif //DJINNI_GENERATED_NJSBITCOINLIKEADDRESS_HPP
