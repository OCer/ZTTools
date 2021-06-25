//
//  LanguageManager.h
//  chaoTV
//
//  Created by Cer on 16/10/19.
//  Copyright © 2016年 Cer. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger
{
    ZTLanguageTypeSystem = 0, // 默认，追随系统
    ZTLanguageTypeCN,         // 简体中文
    ZTLanguageTypeEN          // 英文
} ZTLanguageType;

extern NSString * const kNotificationWithChangeLanguage; // 切换语言的通知名称

@interface ZTLanguageManager : NSObject

@property(nonatomic, assign) ZTLanguageType type; // 当前的语言类型，外部修改该类型时就会设置语言

+ (instancetype)sharedManager;

- (NSUInteger)index; // 获取当前设置语言的下标
- (NSString *)getCurrentLanguageCode; // 获取当前设置的语言代码
- (NSString *)getCurrentLanguage;     // 获取当前语言的名称

// 获取国际化文本
- (NSString *)localizedStringForKey:(NSString *)key value:(NSString *)value table:(NSString *)tableName;
- (NSString *)localizedStringForKey:(NSString *)key value:(NSString *)value;
- (NSString *)localizedStringForKey:(NSString *)key;

@end
