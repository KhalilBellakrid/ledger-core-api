// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import "LGBitcoinLikeNextAccountInfo.h"


@implementation LGBitcoinLikeNextAccountInfo

- (nonnull instancetype)initWithXpubPath:(nonnull NSString *)xpubPath
                                   index:(int32_t)index
                          parentNodePath:(nonnull NSString *)parentNodePath
                         accountNodePath:(nonnull NSString *)accountNodePath
{
    if (self = [super init]) {
        _xpubPath = [xpubPath copy];
        _index = index;
        _parentNodePath = [parentNodePath copy];
        _accountNodePath = [accountNodePath copy];
    }
    return self;
}

+ (nonnull instancetype)BitcoinLikeNextAccountInfoWithXpubPath:(nonnull NSString *)xpubPath
                                                         index:(int32_t)index
                                                parentNodePath:(nonnull NSString *)parentNodePath
                                               accountNodePath:(nonnull NSString *)accountNodePath
{
    return [[self alloc] initWithXpubPath:xpubPath
                                    index:index
                           parentNodePath:parentNodePath
                          accountNodePath:accountNodePath];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p xpubPath:%@ index:%@ parentNodePath:%@ accountNodePath:%@>", self.class, (void *)self, self.xpubPath, @(self.index), self.parentNodePath, self.accountNodePath];
}

@end
