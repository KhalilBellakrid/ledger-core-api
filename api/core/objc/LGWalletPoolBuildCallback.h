// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_pool.djinni

#import "LGError.h"
#import <Foundation/Foundation.h>
@class LGWalletPool;


@protocol LGWalletPoolBuildCallback

- (void)onWalletPoolBuilt:(nullable LGWalletPool *)pool;

- (void)onWalletPoolBuildError:(nonnull LGError *)error;

@end
