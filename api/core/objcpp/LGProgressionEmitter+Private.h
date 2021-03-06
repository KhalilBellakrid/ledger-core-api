// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from emitter.djinni

#include "ProgressionEmitter.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class LGProgressionEmitter;

namespace djinni_generated {

class ProgressionEmitter
{
public:
    using CppType = std::shared_ptr<::ledger::core::api::ProgressionEmitter>;
    using CppOptType = std::shared_ptr<::ledger::core::api::ProgressionEmitter>;
    using ObjcType = LGProgressionEmitter*;

    using Boxed = ProgressionEmitter;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

