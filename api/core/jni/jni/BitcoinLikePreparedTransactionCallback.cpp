// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "BitcoinLikePreparedTransactionCallback.hpp"  // my header
#include "BitcoinLikePreparedTransaction.hpp"
#include "Error.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

BitcoinLikePreparedTransactionCallback::BitcoinLikePreparedTransactionCallback() : ::djinni::JniInterface<::ledger::core::api::BitcoinLikePreparedTransactionCallback, BitcoinLikePreparedTransactionCallback>() {}

BitcoinLikePreparedTransactionCallback::~BitcoinLikePreparedTransactionCallback() = default;

BitcoinLikePreparedTransactionCallback::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

BitcoinLikePreparedTransactionCallback::JavaProxy::~JavaProxy() = default;

void BitcoinLikePreparedTransactionCallback::JavaProxy::onCallback(const std::experimental::optional<::ledger::core::api::BitcoinLikePreparedTransaction> & c_result, const std::experimental::optional<::ledger::core::api::Error> & c_error) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::BitcoinLikePreparedTransactionCallback>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onCallback,
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni_generated::BitcoinLikePreparedTransaction>::fromCpp(jniEnv, c_result)),
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni_generated::Error>::fromCpp(jniEnv, c_error)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated
