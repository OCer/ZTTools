//
//  ZTReflection.h
//  ZTReflectionDemo
//
//  Created by Cer on 2018/12/19.
//  Copyright © 2018 Cer. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger
{
    ZTReflectionResultsSuccessful = 0, // 调用成功
    ZTReflectionResultsError,          // 调用失败，类无法响应方法
    ZTReflectionResultsTarget,         // 调用失败，无target
    ZTReflectionResultsSelector        // 调用失败，无selector
} ZTReflectionResults; // 返回值结果类型；用来判断方法调用是否成功；如果需要获取调用方法的返回值，请使用returnValue参数

@interface ZTReflection : NSObject

/// 判断能否响应某个方法，如果能响应则调用；不获取调用方法的返回值
+ (ZTReflectionResults)performWithTarget:(id _Nonnull)target selectorStringAndParameter:(NSString * _Nonnull)selString, ...;

/// 可以使用returnValue获取调用方法的返回值，如果returnValue为NULL则等同上面的方法，不获取返回值
+ (ZTReflectionResults)performWithTarget:(id _Nonnull)target returnValue:(void * _Nullable)returnValue selectorStringAndParameter:(NSString * _Nonnull)selString, ...;

@end
