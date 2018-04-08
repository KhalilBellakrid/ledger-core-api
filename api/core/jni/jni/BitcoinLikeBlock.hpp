// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKEBLOCK_HPP_JNI_
#define DJINNI_GENERATED_BITCOINLIKEBLOCK_HPP_JNI_

#include "../cpp/BitcoinLikeBlock.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class BitcoinLikeBlock final : ::djinni::JniInterface<::ledger::core::api::BitcoinLikeBlock, BitcoinLikeBlock> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::BitcoinLikeBlock>;
    using CppOptType = std::shared_ptr<::ledger::core::api::BitcoinLikeBlock>;
    using JniType = jobject;

    using Boxed = BitcoinLikeBlock;

    ~BitcoinLikeBlock();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<BitcoinLikeBlock>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<BitcoinLikeBlock>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    BitcoinLikeBlock();
    friend ::djinni::JniClass<BitcoinLikeBlock>;
    friend ::djinni::JniInterface<::ledger::core::api::BitcoinLikeBlock, BitcoinLikeBlock>;

};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_BITCOINLIKEBLOCK_HPP_JNI_