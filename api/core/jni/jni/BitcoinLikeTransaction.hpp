// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKETRANSACTION_HPP_JNI_
#define DJINNI_GENERATED_BITCOINLIKETRANSACTION_HPP_JNI_

#include "../cpp/BitcoinLikeTransaction.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class BitcoinLikeTransaction final : ::djinni::JniInterface<::ledger::core::api::BitcoinLikeTransaction, BitcoinLikeTransaction> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::BitcoinLikeTransaction>;
    using CppOptType = std::shared_ptr<::ledger::core::api::BitcoinLikeTransaction>;
    using JniType = jobject;

    using Boxed = BitcoinLikeTransaction;

    ~BitcoinLikeTransaction();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<BitcoinLikeTransaction>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<BitcoinLikeTransaction>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    BitcoinLikeTransaction();
    friend ::djinni::JniClass<BitcoinLikeTransaction>;
    friend ::djinni::JniInterface<::ledger::core::api::BitcoinLikeTransaction, BitcoinLikeTransaction>;

};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_BITCOINLIKETRANSACTION_HPP_JNI_
