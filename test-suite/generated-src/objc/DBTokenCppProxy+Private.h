// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from token.djinni

#import "DBToken.h"
#import "DBTokenCppProxy.h"
#include "token.hpp"
#import "DJICppWrapperCache+Private.h"
#import <Foundation/Foundation.h>
#include <memory>

@interface DBTokenCppProxy ()

@property (nonatomic, readonly) std::shared_ptr<Token> cppRef;

+ (id)tokenWithCpp:(const std::shared_ptr<Token> &)cppRef;

- (id)initWithCpp:(const std::shared_ptr<Token> &)cppRef;

@end
