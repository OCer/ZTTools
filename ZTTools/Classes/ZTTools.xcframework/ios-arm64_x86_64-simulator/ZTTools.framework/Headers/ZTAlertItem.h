//
//  ZTAlertItem.h
//  ZTAlertViewDemo
//
//  Created by Cer on 2019/1/21.
//  Copyright © 2019 Cer. All rights reserved.
//

#import <Foundation/Foundation.h>
@class ZTAlertItem;

typedef enum : NSUInteger
{
    ZTAlertItemStyleDefault = 0, // 浅色
    ZTAlertItemStyleCancel,      // 灰色
    ZTAlertItemStyleDestructive  // 红色
} ZTAlertItemStyle; // 按钮表现类型

typedef void (^ZTAlertItemBlock)(ZTAlertItem * _Nonnull item);

@interface ZTAlertItem : NSObject

@property(nonatomic, nullable, copy, readonly) NSString *title;
@property(nonatomic, assign, readonly) ZTAlertItemStyle style;

+ (instancetype _Nonnull)itemWithTitle:(NSString * _Nullable)title style:(ZTAlertItemStyle)style block:(ZTAlertItemBlock _Nullable)block;
- (instancetype _Nonnull)initWithTitle:(NSString * _Nullable)title style:(ZTAlertItemStyle)style block:(ZTAlertItemBlock _Nullable)block;

@end
