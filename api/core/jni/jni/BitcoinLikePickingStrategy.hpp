// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKEPICKINGSTRATEGY_HPP_JNI_
#define DJINNI_GENERATED_BITCOINLIKEPICKINGSTRATEGY_HPP_JNI_

#include "../cpp/BitcoinLikePickingStrategy.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class BitcoinLikePickingStrategy final : ::djinni::JniEnum {
public:
    using CppType = ::ledger::core::api::BitcoinLikePickingStrategy;
    using JniType = jobject;

    using Boxed = BitcoinLikePickingStrategy;

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return static_cast<CppType>(::djinni::JniClass<BitcoinLikePickingStrategy>::get().ordinal(jniEnv, j)); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, CppType c) { return ::djinni::JniClass<BitcoinLikePickingStrategy>::get().create(jniEnv, static_cast<jint>(c)); }

private:
    BitcoinLikePickingStrategy() : JniEnum("co/ledger/core/BitcoinLikePickingStrategy") {}
    friend ::djinni::JniClass<BitcoinLikePickingStrategy>;
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_BITCOINLIKEPICKINGSTRATEGY_HPP_JNI_
