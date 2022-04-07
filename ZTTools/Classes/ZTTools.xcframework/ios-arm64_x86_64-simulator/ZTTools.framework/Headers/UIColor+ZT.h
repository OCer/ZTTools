//
//  UIColor+ZT.h
//  ZTToolsSDK
//
//  Created by Asuna on 2022/3/21.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 16进制数字创建颜色  0xf8ff格式（16进制格式）
UIColor *UIColorFromRGB(long rgbValue);

/// 16进制数字创建颜色，可以设置透明度  0xf8ff格式（16进制格式）
UIColor *UIColorFromRGBA(long rgbValue, CGFloat a);

@interface UIColor (ZT)

/// 动态颜色（用来适配黑暗模式的）
+ (UIColor * _Nonnull)dynamicColorWithLight:(UIColor * _Nonnull)light dark:(UIColor * _Nullable)dark;

@end

NS_ASSUME_NONNULL_END
