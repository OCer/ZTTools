//
//  ZTAlertBackground.h
//  ZTAlertViewDemo
//
//  Created by Cer on 2019/1/21.
//  Copyright © 2019 Cer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIBlurEffect.h>
#import <CoreGraphics/CGBase.h>

typedef enum : NSUInteger
{
    ZTBackgroundStyleNone = 0,
    ZTBackgroundStyleTranslucent,
    ZTBackgroundStyleEffect
} ZTBackgroundStyle;

@interface ZTAlertBackground : NSObject

@property(nonatomic, assign, readonly, getter=isTapHidden) BOOL tapHidden;
@property(nonatomic, assign, readonly) ZTBackgroundStyle style;
@property(nonatomic, assign) UIBlurEffectStyle effectStyle;
@property(nonatomic, assign) CGFloat effectAlpha;

+ (instancetype)backgroundWithStyle:(ZTBackgroundStyle)style tapHidden:(BOOL)isTapHidden;
- (instancetype)initWithWithStyle:(ZTBackgroundStyle)style tapHidden:(BOOL)isTapHidden;

@end
