// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#import "LGBitcoinLikePublicKeyCompletionBlock+Private.h"
#import "LGBitcoinLikePublicKeyCompletionBlock.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "LGBitcoinLikePublicKey+Private.h"
#import "LGError+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface LGBitcoinLikePublicKeyCompletionBlock ()

- (id)initWithCpp:(const std::shared_ptr<::ledger::core::api::BitcoinLikePublicKeyCompletionBlock>&)cppRef;

@end

@implementation LGBitcoinLikePublicKeyCompletionBlock {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::ledger::core::api::BitcoinLikePublicKeyCompletionBlock>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::ledger::core::api::BitcoinLikePublicKeyCompletionBlock>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)complete:(nullable LGBitcoinLikePublicKey *)result
           error:(nullable LGError *)error {
    try {
        _cppRefHandle.get()->complete(::djinni::Optional<std::experimental::optional, ::djinni_generated::BitcoinLikePublicKey>::toCpp(result),
                                      ::djinni::Optional<std::experimental::optional, ::djinni_generated::Error>::toCpp(error));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto BitcoinLikePublicKeyCompletionBlock::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto BitcoinLikePublicKeyCompletionBlock::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<LGBitcoinLikePublicKeyCompletionBlock>(cpp);
}

}  // namespace djinni_generated

@end
