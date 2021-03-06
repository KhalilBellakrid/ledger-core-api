// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import <Foundation/Foundation.h>
@class LGAmount;


/**Class representing Bitcoin inputs */
@interface LGBitcoinLikeInput : NSObject

/**
 *Get address that spends the input
 *@return Optional String, address emmiting input
 */
- (nullable NSString *)getAddress;

/**
 *Get amount of input
 *@return Optional Amount object, amount of input
 */
- (nullable LGAmount *)getValue;

/**
 *Check whether input
 *@return Boolean, true if input belongs to coinbase transaction (reward for mining a block)
 */
- (BOOL)isCoinbase;

/**
 *Stored data cointained in coinbase
 *@return Optional String
 */
- (nullable NSString *)getCoinbase;

/**
 *Get hash of previous transaction that generates that input
 *@return Optional String, hash of previous transaction (null if coinbase)
 */
- (nullable NSString *)getPreviousTxHash;

/**
 *Get output index, it identifies which UTXO from tht transaction to spend
 *@return Optional 32 bits integer, index of previous transaction
 */
- (nullable NSNumber *)getPreviousOutputIndex;

@end
