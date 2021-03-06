// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "BitcoinLikePublicKeyCompletionBlock.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class LGBitcoinLikePublicKeyCompletionBlock;

namespace djinni_generated {

class BitcoinLikePublicKeyCompletionBlock
{
public:
    using CppType = std::shared_ptr<::ledger::core::api::BitcoinLikePublicKeyCompletionBlock>;
    using CppOptType = std::shared_ptr<::ledger::core::api::BitcoinLikePublicKeyCompletionBlock>;
    using ObjcType = LGBitcoinLikePublicKeyCompletionBlock*;

    using Boxed = BitcoinLikePublicKeyCompletionBlock;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

