//
//  UIView+EqualMargin.h
//  HowToUseMasonry
//
//  Created by sharejoy on 16-05-29.
//  Copyright © 2016年 shangbin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (EqualMargin)

/// 横向等间距布局
- (void)distributeSpacingHorizontallyWith:(NSArray * _Nonnull)views;

/// 竖向等间距布局
- (void)distributeSpacingVerticallyWith:(NSArray * _Nonnull)views;

@end
