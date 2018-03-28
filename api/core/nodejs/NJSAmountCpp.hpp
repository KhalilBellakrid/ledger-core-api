// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from amount.djinni

#ifndef DJINNI_GENERATED_NJSAMOUNT_HPP
#define DJINNI_GENERATED_NJSAMOUNT_HPP


#include "../../../../core/src/ledger-core-source-api/api/../../utils/optional.hpp"
#include "../../../../core/src/ledger-core-source-api/api/BitcoinLikeNetworkParameters.hpp"
#include "../../../../core/src/ledger-core-source-api/api/Currency.hpp"
#include "../../../../core/src/ledger-core-source-api/api/CurrencyUnit.hpp"
#include "../../../../core/src/ledger-core-source-api/api/FormatRules.hpp"
#include "../../../../core/src/ledger-core-source-api/api/Locale.hpp"
#include "NJSBigIntCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../../../../core/src/ledger-core-source-api/api/Amount.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSAmount: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSAmount() {};
    NJSAmount(const std::shared_ptr<ledger::core::api::Amount> &iAmount):_Amount(iAmount){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::Amount> &object);
    static Nan::Persistent<ObjectTemplate> Amount_prototype;
    std::shared_ptr<ledger::core::api::Amount> getCppImpl(){return _Amount;};

private:
    /**
     *Get amount as a BitInt
     *@return BitInt
     */
    static NAN_METHOD(toBigInt);

    /**
     *Get currency in which amount was computed
     *@return Currency object
     */
    static NAN_METHOD(getCurrency);

    /**
     *Get currency unit in which amount was computed
     *@return CurrencyUnit object
     */
    static NAN_METHOD(getUnit);

    /**
     *Convert amount in another currency unit
     *@param CurrencyUnit object, target currency unit
     *@return Amount object, amount in target currency unit
     */
    static NAN_METHOD(toUnit);

    /**TODO */
    static NAN_METHOD(toMagnitude);

    /**
     *Get amount as string
     *@return string
     */
    static NAN_METHOD(toString);

    /**
     *Get amount as long
     *@reutrn 64 bits integer
     */
    static NAN_METHOD(toLong);

    /**
     *Get amount as double
     *@return double
     */
    static NAN_METHOD(toDouble);

    /**TODO */
    static NAN_METHOD(format);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::Amount> _Amount;
};
#endif //DJINNI_GENERATED_NJSAMOUNT_HPP