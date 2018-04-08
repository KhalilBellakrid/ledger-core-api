// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_ACCOUNTCALLBACK_HPP_JNI_
#define DJINNI_GENERATED_ACCOUNTCALLBACK_HPP_JNI_

#include "../cpp/AccountCallback.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class AccountCallback final : ::djinni::JniInterface<::ledger::core::api::AccountCallback, AccountCallback> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::AccountCallback>;
    using CppOptType = std::shared_ptr<::ledger::core::api::AccountCallback>;
    using JniType = jobject;

    using Boxed = AccountCallback;

    ~AccountCallback();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<AccountCallback>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<AccountCallback>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    AccountCallback();
    friend ::djinni::JniClass<AccountCallback>;
    friend ::djinni::JniInterface<::ledger::core::api::AccountCallback, AccountCallback>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ledger::core::api::AccountCallback
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onCallback(const std::shared_ptr<::ledger::core::api::Account> & result, const std::experimental::optional<::ledger::core::api::Error> & error) override;

    private:
        friend ::djinni::JniInterface<::ledger::core::api::AccountCallback, ::djinni_generated::AccountCallback>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("co/ledger/core/AccountCallback") };
    const jmethodID method_onCallback { ::djinni::jniGetMethodID(clazz.get(), "onCallback", "(Lco/ledger/core/Account;Lco/ledger/core/Error;)V") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_ACCOUNTCALLBACK_HPP_JNI_
