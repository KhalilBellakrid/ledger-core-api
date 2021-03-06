// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from currency.djinni

#import "LGCurrency.h"
#include "Currency.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class LGCurrency;

namespace djinni_generated {

struct Currency
{
    using CppType = ::ledger::core::api::Currency;
    using ObjcType = LGCurrency*;

    using Boxed = Currency;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated
