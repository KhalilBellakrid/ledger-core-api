// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#import "LGBlock.h"


@implementation LGBlock

- (nonnull instancetype)initWithHash:(nonnull NSString *)hash
                                 uid:(nonnull NSString *)uid
                                time:(nonnull NSDate *)time
                        currencyName:(nonnull NSString *)currencyName
                              height:(int64_t)height
{
    if (self = [super init]) {
        _hash = [hash copy];
        _uid = [uid copy];
        _time = time;
        _currencyName = [currencyName copy];
        _height = height;
    }
    return self;
}

+ (nonnull instancetype)BlockWithHash:(nonnull NSString *)hash
                                  uid:(nonnull NSString *)uid
                                 time:(nonnull NSDate *)time
                         currencyName:(nonnull NSString *)currencyName
                               height:(int64_t)height
{
    return [[self alloc] initWithHash:hash
                                  uid:uid
                                 time:time
                         currencyName:currencyName
                               height:height];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p hash:%@ uid:%@ time:%@ currencyName:%@ height:%@>", self.class, (void *)self, self.hash, self.uid, self.time, self.currencyName, @(self.height)];
}

@end
