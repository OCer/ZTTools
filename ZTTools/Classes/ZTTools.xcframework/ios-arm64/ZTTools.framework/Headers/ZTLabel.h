//
//  Label.h
//  PoroPlayer
//
//  Created by Cer on 2017/12/22.
//  Copyright © 2017年 Cer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZTLabel : UILabel

/// 内边距，默认(0, 0, 0, -10)
@property(nonatomic, assign) UIEdgeInsets edgeInsets;

/// 是否支持拷贝，YES表示支持（默认不支持）
@property(nonatomic, assign) BOOL isCopy;

@end
