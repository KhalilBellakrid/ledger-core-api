// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

#import "LGHttpResponse.h"
#include "HttpResponse.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class LGHttpResponse;

namespace djinni_generated {

struct HttpResponse
{
    using CppType = ::ledger::core::api::HttpResponse;
    using ObjcType = LGHttpResponse*;

    using Boxed = HttpResponse;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated
