// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_ACCOUNT_HPP_JNI_
#define DJINNI_GENERATED_ACCOUNT_HPP_JNI_

#include "../cpp/Account.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class Account final : ::djinni::JniInterface<::ledger::core::api::Account, Account> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::Account>;
    using CppOptType = std::shared_ptr<::ledger::core::api::Account>;
    using JniType = jobject;

    using Boxed = Account;

    ~Account();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<Account>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<Account>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    Account();
    friend ::djinni::JniClass<Account>;
    friend ::djinni::JniInterface<::ledger::core::api::Account, Account>;

};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_ACCOUNT_HPP_JNI_
