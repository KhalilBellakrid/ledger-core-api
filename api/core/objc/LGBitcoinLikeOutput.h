// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import <Foundation/Foundation.h>
@class LGAmount;


/**Class representing Bitcoin outputs */
@interface LGBitcoinLikeOutput : NSObject

/**
 *Get transaction hash in which output was 'created'
 *@return String, transaction hash containing output
 */
- (nonnull NSString *)getTransactionHash;

/**
 *Get index of output in list of all outputs contained in same transaction
 *@return 32 bits integer, index of output
 */
- (int32_t)getOutputIndex;

/**
 *Get amount of output
 *@return Amount object, amount of output
 */
- (nullable LGAmount *)getValue;

/**
 *Get script (witness script) cryptographic puzzle that determines the conditions to spend the output
 *@return in Bytes (variable size depending on type of script P2PKH, P2SH), locking script to spend UTXO
 */
- (nonnull NSData *)getScript;

/**
 *Get address that spent the output
 *@return Optional String, address that spent
 */
- (nullable NSString *)getAddress;

@end
