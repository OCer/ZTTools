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

typedef void (^ZTAlertItemBlock)(ZTAlertItem *item);

@interface ZTAlertItem : NSObject

@property (nonatomic, copy, readonly) NSString *title;
@property (nonatomic, assign, readonly) ZTAlertItemStyle style;

+ (instancetype)itemWithTitle:(NSString *)title style:(ZTAlertItemStyle)style block:(ZTAlertItemBlock)block;
- (instancetype)initWithTitle:(NSString *)title style:(ZTAlertItemStyle)style block:(ZTAlertItemBlock)block;

@end
