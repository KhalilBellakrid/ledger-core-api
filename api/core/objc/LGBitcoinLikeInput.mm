// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import "LGBitcoinLikeInput.h"


@implementation LGBitcoinLikeInput

- (nonnull instancetype)initWithPath:(nonnull NSString *)path
                          isCoinbase:(BOOL)isCoinbase
                      previousTxHash:(nonnull NSString *)previousTxHash
                   indexInPreviousTx:(int32_t)indexInPreviousTx
{
    if (self = [super init]) {
        _path = [path copy];
        _isCoinbase = isCoinbase;
        _previousTxHash = [previousTxHash copy];
        _indexInPreviousTx = indexInPreviousTx;
    }
    return self;
}

+ (nonnull instancetype)BitcoinLikeInputWithPath:(nonnull NSString *)path
                                      isCoinbase:(BOOL)isCoinbase
                                  previousTxHash:(nonnull NSString *)previousTxHash
                               indexInPreviousTx:(int32_t)indexInPreviousTx
{
    return [[self alloc] initWithPath:path
                           isCoinbase:isCoinbase
                       previousTxHash:previousTxHash
                    indexInPreviousTx:indexInPreviousTx];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p path:%@ isCoinbase:%@ previousTxHash:%@ indexInPreviousTx:%@>", self.class, (void *)self, self.path, @(self.isCoinbase), self.previousTxHash, @(self.indexInPreviousTx)];
}

@end
