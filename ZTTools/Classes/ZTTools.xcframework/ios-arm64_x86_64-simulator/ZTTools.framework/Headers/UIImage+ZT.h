//
//  UIImage+ZT.h
//  ZTToolsSDK
//
//  Created by Asuna on 2022/3/21.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, ZTGradientDirection)
{
    ZTLinearGradientDirectionLevel = 0,             // AC - BD
    ZTLinearGradientDirectionVertical,              // AB - CD
    ZTLinearGradientDirectionUpwardDiagonalLine,    // A - D
    ZTLinearGradientDirectionDownDiagonalLine,      // C - B
};
//      A         B
//       _________
//      |         |
//      |         |
//       ---------
//      C         D

typedef NS_ENUM(NSUInteger, ZTPositionType)
{
    ZTPositionTypeLeftTop = 1,
    ZTPositionTypeRightTop,
    ZTPositionTypeLeftBottom,
    ZTPositionTypeRightBottom
};

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (ZT)

/// 获取图片的格式
- (NSString * _Nullable)imageType;

/// 宽高自定缩放
- (UIImage * _Nullable)scaleImageToSize:(CGSize)reSize;

/// 等比率缩放
- (UIImage * _Nullable)scaleImageToScale:(float)scaleSize;

/// 创建缩略图并保存（不传path就不保存）
- (UIImage * _Nullable)createThumbnailWithPath:(NSString * _Nullable)path;

/// 图片合成
- (UIImage * _Nullable)waterMark:(UIImage * _Nonnull)markImage markPosition:(ZTPositionType)position;

/// 通过颜色获取渐变图片
+ (UIImage * _Nullable)getLinearGradientImageWithStartColor:(UIColor * _Nonnull)startColor endColor:(UIColor * _Nonnull)endColor directionType:(ZTGradientDirection)directionType option:(CGSize)size;

/// 使用颜色创建图片
+ (UIImage * _Nullable)imageWithColor:(UIColor * _Nonnull)color;

/// 使用颜色创建图片
+ (UIImage * _Nullable)imageWithColor:(UIColor * _Nonnull)color size:(CGSize)size;

@end

NS_ASSUME_NONNULL_END
