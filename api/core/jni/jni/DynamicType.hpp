// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from dynamic.djinni

#ifndef DJINNI_GENERATED_DYNAMICTYPE_HPP_JNI_
#define DJINNI_GENERATED_DYNAMICTYPE_HPP_JNI_

#include "../cpp/DynamicType.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class DynamicType final : ::djinni::JniEnum {
public:
    using CppType = ::ledger::core::api::DynamicType;
    using JniType = jobject;

    using Boxed = DynamicType;

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return static_cast<CppType>(::djinni::JniClass<DynamicType>::get().ordinal(jniEnv, j)); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, CppType c) { return ::djinni::JniClass<DynamicType>::get().create(jniEnv, static_cast<jint>(c)); }

private:
    DynamicType() : JniEnum("co/ledger/core/DynamicType") {}
    friend ::djinni::JniClass<DynamicType>;
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_DYNAMICTYPE_HPP_JNI_
