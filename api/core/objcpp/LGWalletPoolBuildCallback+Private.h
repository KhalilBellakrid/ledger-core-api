// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_pool.djinni

#include "WalletPoolBuildCallback.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol LGWalletPoolBuildCallback;

namespace djinni_generated {

class WalletPoolBuildCallback
{
public:
    using CppType = std::shared_ptr<::ledger::core::api::WalletPoolBuildCallback>;
    using CppOptType = std::shared_ptr<::ledger::core::api::WalletPoolBuildCallback>;
    using ObjcType = id<LGWalletPoolBuildCallback>;

    using Boxed = WalletPoolBuildCallback;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

