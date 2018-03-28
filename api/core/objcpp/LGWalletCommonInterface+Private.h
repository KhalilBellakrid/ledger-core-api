// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_common_interface.djinni

#include "WalletCommonInterface.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class LGWalletCommonInterface;

namespace djinni_generated {

class WalletCommonInterface
{
public:
    using CppType = std::shared_ptr<::ledger::core::api::WalletCommonInterface>;
    using CppOptType = std::shared_ptr<::ledger::core::api::WalletCommonInterface>;
    using ObjcType = LGWalletCommonInterface*;

    using Boxed = WalletCommonInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

