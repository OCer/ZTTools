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

/// 切换语言的通知名称
extern NSString * _Nonnull const kNotificationWithChangeLanguage;

@interface ZTLanguageManager : NSObject

/// 当前的语言类型，外部修改该类型时就会设置语言
@property(nonatomic, assign) ZTLanguageType type;

+ (instancetype _Nonnull)sharedManager;

/// 获取当前设置语言的下标
- (NSUInteger)index;

/// 获取当前设置的语言代码
- (NSString * _Nonnull)getCurrentLanguageCode;

/// 获取当前语言的名称
- (NSString * _Nonnull)getCurrentLanguage;

/// 获取国际化文本
- (NSString * _Nonnull)localizedStringForKey:(NSString * _Nonnull)key value:(NSString * _Nonnull)value table:(NSString * _Nullable)tableName;
- (NSString * _Nonnull)localizedStringForKey:(NSString * _Nonnull)key value:(NSString * _Nonnull)value;
- (NSString * _Nonnull)localizedStringForKey:(NSString * _Nonnull)key;

@end
