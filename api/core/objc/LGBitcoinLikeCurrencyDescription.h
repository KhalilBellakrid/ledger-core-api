// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import <Foundation/Foundation.h>

@interface LGBitcoinLikeCurrencyDescription : NSObject
- (nonnull instancetype)initWithBIP44CoinType:(int32_t)BIP44CoinType
                          P2PKHAddressVersion:(nonnull NSData *)P2PKHAddressVersion
                           P2SHAddressVersion:(nonnull NSData *)P2SHAddressVersion
                           XPUBAddressVersion:(nonnull NSData *)XPUBAddressVersion
                                    shortName:(nonnull NSString *)shortName;
+ (nonnull instancetype)BitcoinLikeCurrencyDescriptionWithBIP44CoinType:(int32_t)BIP44CoinType
                                                    P2PKHAddressVersion:(nonnull NSData *)P2PKHAddressVersion
                                                     P2SHAddressVersion:(nonnull NSData *)P2SHAddressVersion
                                                     XPUBAddressVersion:(nonnull NSData *)XPUBAddressVersion
                                                              shortName:(nonnull NSString *)shortName;

@property (nonatomic, readonly) int32_t BIP44CoinType;

@property (nonatomic, readonly, nonnull) NSData * P2PKHAddressVersion;

@property (nonatomic, readonly, nonnull) NSData * P2SHAddressVersion;

@property (nonatomic, readonly, nonnull) NSData * XPUBAddressVersion;

@property (nonatomic, readonly, nonnull) NSString * shortName;

@end
