// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from random.djinni

#ifndef DJINNI_GENERATED_RANDOMNUMBERGENERATOR_HPP_JNI_
#define DJINNI_GENERATED_RANDOMNUMBERGENERATOR_HPP_JNI_

#include "../cpp/RandomNumberGenerator.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class RandomNumberGenerator final : ::djinni::JniInterface<::ledger::core::api::RandomNumberGenerator, RandomNumberGenerator> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::RandomNumberGenerator>;
    using CppOptType = std::shared_ptr<::ledger::core::api::RandomNumberGenerator>;
    using JniType = jobject;

    using Boxed = RandomNumberGenerator;

    ~RandomNumberGenerator();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<RandomNumberGenerator>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<RandomNumberGenerator>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    RandomNumberGenerator();
    friend ::djinni::JniClass<RandomNumberGenerator>;
    friend ::djinni::JniInterface<::ledger::core::api::RandomNumberGenerator, RandomNumberGenerator>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ledger::core::api::RandomNumberGenerator
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        std::vector<uint8_t> getRandomBytes(int32_t size) override;
        int32_t getRandomInt() override;
        int64_t getRandomLong() override;
        int8_t getRandomByte() override;

    private:
        friend ::djinni::JniInterface<::ledger::core::api::RandomNumberGenerator, ::djinni_generated::RandomNumberGenerator>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("co/ledger/core/RandomNumberGenerator") };
    const jmethodID method_getRandomBytes { ::djinni::jniGetMethodID(clazz.get(), "getRandomBytes", "(I)[B") };
    const jmethodID method_getRandomInt { ::djinni::jniGetMethodID(clazz.get(), "getRandomInt", "()I") };
    const jmethodID method_getRandomLong { ::djinni::jniGetMethodID(clazz.get(), "getRandomLong", "()J") };
    const jmethodID method_getRandomByte { ::djinni::jniGetMethodID(clazz.get(), "getRandomByte", "()B") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_RANDOMNUMBERGENERATOR_HPP_JNI_
