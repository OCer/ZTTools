//
//  ZTUITools.h
//  ZTTools
//
//  Created by Asuna on 2021/4/27.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZTUITools : NSObject

/// 获取视频的第一帧图片
+ (UIImage * _Nullable)getFirstFrameOfVideoWithVideoURL:(NSURL * _Nonnull)videoURL;

/*
 *videoURL:视频地址(本地/网络)
 *time      :第N帧
 */
+ (UIImage * _Nullable)thumbnailImageForVideo:(NSURL * _Nonnull)videoURL atTime:(NSTimeInterval)time;

/// 获取当前屏幕显示的控制器，不包含模态出来的(适用于可以根据根控制器来获取的情况下，如果是自定义的TabBar就不行了)
+ (UIViewController * _Nullable)getCurrentVC;

/// 获取当前屏幕显示的控制器，包含模态出来的(适用于可以根据根控制器来获取的情况下，如果是自定义的TabBar就不行了)
+ (UIViewController * _Nullable)getVisibleVC;

/// 获取当前显示的控制器，包含模态出来的（适用于当前类是NSObject，并且不能根据根控制器的情况下）
+ (UIViewController * _Nullable)getCurrentVCForWindow;

/// 获取当前显示的控制器，包含模态出来的（适用于能获取当前显示的View的情况下）
+ (UIViewController * _Nullable)getCurrentVCForView:(UIView * _Nonnull)view;

@end

NS_ASSUME_NONNULL_END
