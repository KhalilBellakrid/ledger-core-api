// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_public_key_provider.djinni

#include "BitcoinLikeBase58PublicKeyCallback.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class LGBitcoinLikeBase58PublicKeyCallback;

namespace djinni_generated {

class BitcoinLikeBase58PublicKeyCallback
{
public:
    using CppType = std::shared_ptr<::ledger::core::api::BitcoinLikeBase58PublicKeyCallback>;
    using CppOptType = std::shared_ptr<::ledger::core::api::BitcoinLikeBase58PublicKeyCallback>;
    using ObjcType = LGBitcoinLikeBase58PublicKeyCallback*;

    using Boxed = BitcoinLikeBase58PublicKeyCallback;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

