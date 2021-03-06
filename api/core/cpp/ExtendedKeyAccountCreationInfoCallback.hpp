// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_EXTENDEDKEYACCOUNTCREATIONINFOCALLBACK_HPP
#define DJINNI_GENERATED_EXTENDEDKEYACCOUNTCREATIONINFOCALLBACK_HPP

#include "../../../../core/src/utils/optional.hpp"

namespace ledger { namespace core { namespace api {

struct Error;
struct ExtendedKeyAccountCreationInfo;

/**
 *Callback triggered by main completed task,
 *returns optional result of template type T
 */
class ExtendedKeyAccountCreationInfoCallback {
public:
    virtual ~ExtendedKeyAccountCreationInfoCallback() {}

    /**
     * Method triggered when main task complete
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    virtual void onCallback(const std::experimental::optional<ExtendedKeyAccountCreationInfo> & result, const std::experimental::optional<Error> & error) = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_EXTENDEDKEYACCOUNTCREATIONINFOCALLBACK_HPP
