// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import "LGBitcoinLikeConfigurationKeyChain+Private.h"
#import "LGBitcoinLikeConfigurationKeyChain.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface LGBitcoinLikeConfigurationKeyChain ()

- (id)initWithCpp:(const std::shared_ptr<::ledger::core::api::BitcoinLikeConfigurationKeyChain>&)cppRef;

@end

@implementation LGBitcoinLikeConfigurationKeyChain {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::ledger::core::api::BitcoinLikeConfigurationKeyChain>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::ledger::core::api::BitcoinLikeConfigurationKeyChain>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

namespace djinni_generated {

auto BitcoinLikeConfigurationKeyChain::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto BitcoinLikeConfigurationKeyChain::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<LGBitcoinLikeConfigurationKeyChain>(cpp);
}

}  // namespace djinni_generated

@end
