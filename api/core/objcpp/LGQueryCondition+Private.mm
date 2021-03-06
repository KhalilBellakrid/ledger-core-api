// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#import "LGQueryCondition+Private.h"
#import "LGQueryCondition.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "LGAmount+Private.h"
#import "LGOperationType+Private.h"
#import "LGQueryFilter+Private.h"
#import "LGTrustLevel+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface LGQueryCondition ()

- (id)initWithCpp:(const std::shared_ptr<::ledger::core::api::QueryCondition>&)cppRef;

@end

@implementation LGQueryCondition {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::ledger::core::api::QueryCondition>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::ledger::core::api::QueryCondition>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable LGQueryFilter *)accountEq:(nonnull NSString *)accountUid {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::accountEq(::djinni::String::toCpp(accountUid));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)accountNeq:(nonnull NSString *)accountUid {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::accountNeq(::djinni::String::toCpp(accountUid));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)dateLte:(nonnull NSDate *)time {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::dateLte(::djinni::Date::toCpp(time));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)dateLt:(nonnull NSDate *)time {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::dateLt(::djinni::Date::toCpp(time));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)dateGte:(nonnull NSDate *)time {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::dateGte(::djinni::Date::toCpp(time));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)dateEq:(nonnull NSDate *)time {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::dateEq(::djinni::Date::toCpp(time));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)dateNeq:(nonnull NSDate *)time {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::dateNeq(::djinni::Date::toCpp(time));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)containsRecipient:(nonnull NSString *)recipientAddress {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::containsRecipient(::djinni::String::toCpp(recipientAddress));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)containsSender:(nonnull NSString *)senderAddress {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::containsSender(::djinni::String::toCpp(senderAddress));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)currencyEq:(nonnull NSString *)currencyName {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::currencyEq(::djinni::String::toCpp(currencyName));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)operationUidEq:(nonnull NSString *)operationUid {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::operationUidEq(::djinni::String::toCpp(operationUid));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)operationUidNeq:(nonnull NSString *)operationUid {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::operationUidNeq(::djinni::String::toCpp(operationUid));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)trustEq:(LGTrustLevel)trust {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::trustEq(::djinni::Enum<::ledger::core::api::TrustLevel, LGTrustLevel>::toCpp(trust));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)trustNeq:(LGTrustLevel)trust {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::trustNeq(::djinni::Enum<::ledger::core::api::TrustLevel, LGTrustLevel>::toCpp(trust));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)feesEq:(nullable LGAmount *)amount {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::feesEq(::djinni_generated::Amount::toCpp(amount));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)feesNeq:(nullable LGAmount *)amount {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::feesNeq(::djinni_generated::Amount::toCpp(amount));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)feesGte:(nullable LGAmount *)amount {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::feesGte(::djinni_generated::Amount::toCpp(amount));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)feesGt:(nullable LGAmount *)amount {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::feesGt(::djinni_generated::Amount::toCpp(amount));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)feesLte:(nullable LGAmount *)amount {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::feesLte(::djinni_generated::Amount::toCpp(amount));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)feesLt:(nullable LGAmount *)amount {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::feesLt(::djinni_generated::Amount::toCpp(amount));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)amountEq:(nullable LGAmount *)amount {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::amountEq(::djinni_generated::Amount::toCpp(amount));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)amountNeq:(nullable LGAmount *)amount {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::amountNeq(::djinni_generated::Amount::toCpp(amount));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)amountGte:(nullable LGAmount *)amount {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::amountGte(::djinni_generated::Amount::toCpp(amount));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)amountGt:(nullable LGAmount *)amount {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::amountGt(::djinni_generated::Amount::toCpp(amount));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)amountLte:(nullable LGAmount *)amount {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::amountLte(::djinni_generated::Amount::toCpp(amount));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)amountLt:(nullable LGAmount *)amount {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::amountLt(::djinni_generated::Amount::toCpp(amount));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)blockHeightEq:(int64_t)blockHeight {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::blockHeightEq(::djinni::I64::toCpp(blockHeight));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)blockHeightNeq:(int64_t)blockHeight {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::blockHeightNeq(::djinni::I64::toCpp(blockHeight));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)blockHeightGte:(int64_t)blockHeight {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::blockHeightGte(::djinni::I64::toCpp(blockHeight));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)blockHeightGt:(int64_t)blockHeight {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::blockHeightGt(::djinni::I64::toCpp(blockHeight));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)blockHeightLte:(int64_t)blockHeight {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::blockHeightLte(::djinni::I64::toCpp(blockHeight));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)blockHeightLt:(int64_t)blockHeight {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::blockHeightLt(::djinni::I64::toCpp(blockHeight));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)blockHeightIsNull {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::blockHeightIsNull();
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)operationTypeEq:(LGOperationType)operationType {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::operationTypeEq(::djinni::Enum<::ledger::core::api::OperationType, LGOperationType>::toCpp(operationType));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGQueryFilter *)operationTypeNeq:(LGOperationType)operationType {
    try {
        auto objcpp_result_ = ::ledger::core::api::QueryCondition::operationTypeNeq(::djinni::Enum<::ledger::core::api::OperationType, LGOperationType>::toCpp(operationType));
        return ::djinni_generated::QueryFilter::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto QueryCondition::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto QueryCondition::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<LGQueryCondition>(cpp);
}

}  // namespace djinni_generated

@end
