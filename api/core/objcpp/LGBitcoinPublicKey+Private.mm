// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_public_key_provider.djinni

#import "LGBitcoinPublicKey+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto BitcoinPublicKey::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::Binary::toCpp(obj.publicKey),
            ::djinni::Binary::toCpp(obj.chainCode)};
}

auto BitcoinPublicKey::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[LGBitcoinPublicKey alloc] initWithPublicKey:(::djinni::Binary::fromCpp(cpp.publicKey))
                                               chainCode:(::djinni::Binary::fromCpp(cpp.chainCode))];
}

}  // namespace djinni_generated
