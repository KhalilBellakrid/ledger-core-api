// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSBITCOINLIKEINPUT_HPP
#define DJINNI_GENERATED_NJSBITCOINLIKEINPUT_HPP


#include "../cpp/../../../../core/src/utils/optional.hpp"
#include "NJSAmountCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../cpp/BitcoinLikeInput.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBitcoinLikeInput: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSBitcoinLikeInput() {};
    NJSBitcoinLikeInput(const std::shared_ptr<ledger::core::api::BitcoinLikeInput> &iBitcoinLikeInput):_BitcoinLikeInput(iBitcoinLikeInput){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeInput> &object);
    static Nan::Persistent<ObjectTemplate> BitcoinLikeInput_prototype;
    std::shared_ptr<ledger::core::api::BitcoinLikeInput> getCppImpl(){return _BitcoinLikeInput;};

private:
    /**
     *Get address that spends the input
     *@return Optional String, address emmiting input
     */
    static NAN_METHOD(getAddress);

    /**
     *Get amount of input
     *@return Optional Amount object, amount of input
     */
    static NAN_METHOD(getValue);

    /**
     *Check whether input
     *@return Boolean, true if input belongs to coinbase transaction (reward for mining a block)
     */
    static NAN_METHOD(isCoinbase);

    /**
     *Stored data cointained in coinbase
     *@return Optional String
     */
    static NAN_METHOD(getCoinbase);

    /**
     *Get hash of previous transaction that generates that input
     *@return Optional String, hash of previous transaction (null if coinbase)
     */
    static NAN_METHOD(getPreviousTxHash);

    /**
     *Get output index, it identifies which UTXO from tht transaction to spend
     *@return Optional 32 bits integer, index of previous transaction
     */
    static NAN_METHOD(getPreviousOutputIndex);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::BitcoinLikeInput> _BitcoinLikeInput;
};
#endif //DJINNI_GENERATED_NJSBITCOINLIKEINPUT_HPP
