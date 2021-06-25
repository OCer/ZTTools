//
//  ZTUITools.h
//  ZTTools
//
//  Created by Asuna on 2021/4/27.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@import Photos;

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

@interface ZTUITools : NSObject

+ (UIImage *)scaleImage:(UIImage *)image toSize:(CGSize)reSize; // 宽高自定缩放

+ (UIImage *)scaleImage:(UIImage *)image toScale:(float)scaleSize; // 等比率缩放

+ (UIImage *)createThumbnailWithPath:(NSString *)path andImage:(UIImage *)image; // 创建缩略图并保存（不传path就不保存）

+ (UIImage *)getLinearGradientImage:(UIColor *)startColor and:(UIColor *)endColor directionType:(ZTGradientDirection)directionType option:(CGSize)size; // 通过颜色获取渐变图片

/**
 获取视频的第一帧图片
 */
+ (UIImage *)getFirstFrameOfVideoWithVideoURL:(NSURL *)videoURL;

/*
 *videoURL:视频地址(本地/网络)
 *time      :第N帧
 */
+ (UIImage *)thumbnailImageForVideo:(NSURL *)videoURL atTime:(NSTimeInterval)time;

+ (UIImage *)waterMarkImageWithBackgroundImage:(UIImage *)background waterMark:(UIImage *)markImage markPosition:(ZTPositionType)position; // 图片合成

+ (UIEdgeInsets)safeAreaInsetsWithView:(UIView *)view; // 获取安全区域

+ (UIEdgeInsets)safeAreaInsetsWithKeyWindow; // 获取安全区域

+ (void)removeAllSubviews:(UIView *)view; // 删除view的所有子视图

+ (UIViewController *)getCurrentVC; // 获取当前屏幕显示的控制器，不包含模态出来的(适用于可以根据根控制器来获取的情况下，如果是自定义的TabBar就不行了)

+ (UIViewController *)getVisibleVC; // 获取当前屏幕显示的控制器，包含模态出来的(适用于可以根据根控制器来获取的情况下，如果是自定义的TabBar就不行了)

+ (UIViewController *)getCurrentVCForWindow; // 获取当前显示的控制器，包含模态出来的（适用于当前类是NSObject，并且不能根据根控制器的情况下）

+ (UIViewController *)getCurrentVCForView:(UIView *)view; // 获取当前显示的控制器，包含模态出来的（适用于能获取当前显示的View的情况下）

+ (PHAssetCollection *)createCollectionWithTitle:(NSString *)title; // 创建自己要创建的自定义相册

+ (void)saveImageToAlbumWithImage:(UIImage *)image
                toAssetCollection:(PHAssetCollection *)targetCollection
                  completionBlock:(void (^)(NSError *error))completionBlock; // 保存图片到自定义相册（异步）

+ (void)saveImageSynchronousToAlbumWithImage:(UIImage *)image
                           toAssetCollection:(PHAssetCollection *)targetCollection
                             completionBlock:(void (^)(NSError *error))completionBlock; // 保存图片到自定义相册（同步）

+ (void)saveVideoToAlbumWithURL:(NSURL *)url
              toAssetCollection:(PHAssetCollection *)targetCollection
                completionBlock:(void (^)(NSError *error))completionBlock; // 保存视频到自定义相册（异步）

+ (void)saveVideoSynchronousToAlbumWithURL:(NSURL *)url
                         toAssetCollection:(PHAssetCollection *)targetCollection
                           completionBlock:(void (^)(NSError *error))completionBlock; // 保存视频到自定义相册（同步）

@end

NS_ASSUME_NONNULL_END
