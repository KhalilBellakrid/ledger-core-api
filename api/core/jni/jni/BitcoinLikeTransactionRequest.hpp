// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKETRANSACTIONREQUEST_HPP_JNI_
#define DJINNI_GENERATED_BITCOINLIKETRANSACTIONREQUEST_HPP_JNI_

#include "../cpp/BitcoinLikeTransactionRequest.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class BitcoinLikeTransactionRequest final {
public:
    using CppType = ::ledger::core::api::BitcoinLikeTransactionRequest;
    using JniType = jobject;

    using Boxed = BitcoinLikeTransactionRequest;

    ~BitcoinLikeTransactionRequest();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    BitcoinLikeTransactionRequest();
    friend ::djinni::JniClass<BitcoinLikeTransactionRequest>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("co/ledger/core/BitcoinLikeTransactionRequest") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/ArrayList;Ljava/util/ArrayList;Lco/ledger/core/Amount;Lco/ledger/core/Amount;Ljava/lang/Integer;)V") };
    const jfieldID field_utxo { ::djinni::jniGetFieldID(clazz.get(), "utxo", "Ljava/util/ArrayList;") };
    const jfieldID field_outputs { ::djinni::jniGetFieldID(clazz.get(), "outputs", "Ljava/util/ArrayList;") };
    const jfieldID field_baseFees { ::djinni::jniGetFieldID(clazz.get(), "baseFees", "Lco/ledger/core/Amount;") };
    const jfieldID field_totalFees { ::djinni::jniGetFieldID(clazz.get(), "totalFees", "Lco/ledger/core/Amount;") };
    const jfieldID field_lockTime { ::djinni::jniGetFieldID(clazz.get(), "lockTime", "Ljava/lang/Integer;") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_BITCOINLIKETRANSACTIONREQUEST_HPP_JNI_