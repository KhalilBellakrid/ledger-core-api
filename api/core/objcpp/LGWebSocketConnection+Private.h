// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from websocket_client.djinni

#include "WebSocketConnection.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class LGWebSocketConnection;

namespace djinni_generated {

class WebSocketConnection
{
public:
    using CppType = std::shared_ptr<::ledger::core::api::WebSocketConnection>;
    using CppOptType = std::shared_ptr<::ledger::core::api::WebSocketConnection>;
    using ObjcType = LGWebSocketConnection*;

    using Boxed = WebSocketConnection;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

