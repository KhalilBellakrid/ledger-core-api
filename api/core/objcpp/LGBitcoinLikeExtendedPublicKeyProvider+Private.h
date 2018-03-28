// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_public_key_provider.djinni

#include "BitcoinLikeExtendedPublicKeyProvider.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class LGBitcoinLikeExtendedPublicKeyProvider;

namespace djinni_generated {

class BitcoinLikeExtendedPublicKeyProvider
{
public:
    using CppType = std::shared_ptr<::ledger::core::api::BitcoinLikeExtendedPublicKeyProvider>;
    using CppOptType = std::shared_ptr<::ledger::core::api::BitcoinLikeExtendedPublicKeyProvider>;
    using ObjcType = LGBitcoinLikeExtendedPublicKeyProvider*;

    using Boxed = BitcoinLikeExtendedPublicKeyProvider;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

