// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKEPREPAREDTRANSACTION_HPP_JNI_
#define DJINNI_GENERATED_BITCOINLIKEPREPAREDTRANSACTION_HPP_JNI_

#include "../cpp/BitcoinLikePreparedTransaction.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class BitcoinLikePreparedTransaction final {
public:
    using CppType = ::ledger::core::api::BitcoinLikePreparedTransaction;
    using JniType = jobject;

    using Boxed = BitcoinLikePreparedTransaction;

    ~BitcoinLikePreparedTransaction();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    BitcoinLikePreparedTransaction();
    friend ::djinni::JniClass<BitcoinLikePreparedTransaction>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("co/ledger/core/BitcoinLikePreparedTransaction") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(ILjava/util/ArrayList;Ljava/util/ArrayList;Ljava/util/ArrayList;I)V") };
    const jfieldID field_version { ::djinni::jniGetFieldID(clazz.get(), "version", "I") };
    const jfieldID field_inputs { ::djinni::jniGetFieldID(clazz.get(), "inputs", "Ljava/util/ArrayList;") };
    const jfieldID field_paths { ::djinni::jniGetFieldID(clazz.get(), "paths", "Ljava/util/ArrayList;") };
    const jfieldID field_outputs { ::djinni::jniGetFieldID(clazz.get(), "outputs", "Ljava/util/ArrayList;") };
    const jfieldID field_lockTime { ::djinni::jniGetFieldID(clazz.get(), "lockTime", "I") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_BITCOINLIKEPREPAREDTRANSACTION_HPP_JNI_
