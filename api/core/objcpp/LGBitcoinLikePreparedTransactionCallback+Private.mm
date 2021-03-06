// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#import "LGBitcoinLikePreparedTransactionCallback+Private.h"
#import "LGBitcoinLikePreparedTransactionCallback.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "LGBitcoinLikePreparedTransaction+Private.h"
#import "LGError+Private.h"
#include <stdexcept>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

namespace djinni_generated {

class BitcoinLikePreparedTransactionCallback::ObjcProxy final
: public ::ledger::core::api::BitcoinLikePreparedTransactionCallback
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::BitcoinLikePreparedTransactionCallback;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void onCallback(const std::experimental::optional<::ledger::core::api::BitcoinLikePreparedTransaction> & c_result, const std::experimental::optional<::ledger::core::api::Error> & c_error) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onCallback:(::djinni::Optional<std::experimental::optional, ::djinni_generated::BitcoinLikePreparedTransaction>::fromCpp(c_result))
                                                           error:(::djinni::Optional<std::experimental::optional, ::djinni_generated::Error>::fromCpp(c_error))];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto BitcoinLikePreparedTransactionCallback::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto BitcoinLikePreparedTransactionCallback::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return dynamic_cast<ObjcProxy&>(*cpp).djinni_private_get_proxied_objc_object();
}

}  // namespace djinni_generated
