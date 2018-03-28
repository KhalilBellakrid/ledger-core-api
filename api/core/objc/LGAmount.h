// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from amount.djinni

#import "LGCurrency.h"
#import "LGCurrencyUnit.h"
#import "LGFormatRules.h"
#import "LGLocale.h"
#import <Foundation/Foundation.h>
@class LGAmount;
@class LGBigInt;


/**Class representing amount of transaction, output, inputs ... */
@interface LGAmount : NSObject

/**
 *Get amount as a BitInt
 *@return BitInt
 */
- (nullable LGBigInt *)toBigInt;

/**
 *Get currency in which amount was computed
 *@return Currency object
 */
- (nonnull LGCurrency *)getCurrency;

/**
 *Get currency unit in which amount was computed
 *@return CurrencyUnit object
 */
- (nonnull LGCurrencyUnit *)getUnit;

/**
 *Convert amount in another currency unit
 *@param CurrencyUnit object, target currency unit
 *@return Amount object, amount in target currency unit
 */
- (nullable LGAmount *)toUnit:(nonnull LGCurrencyUnit *)unit;

/**TODO */
- (nullable LGAmount *)toMagnitude:(int32_t)magnitude;

/**
 *Get amount as string
 *@return string
 */
- (nonnull NSString *)toString;

/**
 *Get amount as long
 *@reutrn 64 bits integer
 */
- (int64_t)toLong;

/**
 *Get amount as double
 *@return double
 */
- (double)toDouble;

/**TODO */
- (nonnull NSString *)format:(nonnull LGLocale *)locale
                       rules:(nullable LGFormatRules *)rules;

@end
