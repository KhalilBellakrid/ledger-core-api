// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "OperationCallback.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol LGOperationCallback;

namespace djinni_generated {

class OperationCallback
{
public:
    using CppType = std::shared_ptr<::ledger::core::api::OperationCallback>;
    using CppOptType = std::shared_ptr<::ledger::core::api::OperationCallback>;
    using ObjcType = id<LGOperationCallback>;

    using Boxed = OperationCallback;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

