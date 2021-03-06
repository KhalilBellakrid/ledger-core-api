// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from crypto_currency_description.djinni

#import "LGCryptoCurrencyUnit.h"


@implementation LGCryptoCurrencyUnit

- (nonnull instancetype)initWithName:(nonnull NSString *)name
                        decimalPlace:(int32_t)decimalPlace
{
    if (self = [super init]) {
        _name = [name copy];
        _decimalPlace = decimalPlace;
    }
    return self;
}

+ (nonnull instancetype)CryptoCurrencyUnitWithName:(nonnull NSString *)name
                                      decimalPlace:(int32_t)decimalPlace
{
    return [[self alloc] initWithName:name
                         decimalPlace:decimalPlace];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p name:%@ decimalPlace:%@>", self.class, (void *)self, self.name, @(self.decimalPlace)];
}

@end
