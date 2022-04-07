//
//  ZTDeviceManager.h
//  ChartsDemo
//
//  Created by Asuna on 2020/12/4.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZTDeviceManager : NSObject

/// 获取keyWindow
+ (UIWindow * _Nonnull)getKeyWindow;

/// 判断是否是全面屏
+ (BOOL)isFullScreen;

/// 获取手机型号
+ (NSString * _Nonnull)platformString;

/// 获取app名称
+ (NSString * _Nonnull)getAPPName;

/// 获 Bundle Id
+ (NSString * _Nonnull)getAPPBundleIdentifier;

/// 获取app版本
+ (NSString * _Nonnull)getAPPVersion;

/// 获取app build版本
+ (NSString * _Nonnull)getAPPBuild;

/// 获取iOS版本号
+ (CGFloat)getSystemVersion;

/// 获取iOS版本号字符串
+ (NSString * _Nonnull)getSystemVersionString;

/// 获取系统的当前语言代码
+ (NSString * _Nonnull)getPreferredLanguage;

/// 获取总硬盘大小(单位KB)
+ (double)totalDiskSpace;

/// 获取剩余硬盘大小(单位KB)
+ (double)freeDiskSpace;

/// 获取APP所占用的内存（单位：MB）
+ (double)usedMemory;

/// 震动反馈 一般性震动
+ (void)vibration;

/// Switch切换震动
+ (void)vibrationWithSwitch;

/// 完成某样任务震动
+ (void)vibrationWithDone:(UINotificationFeedbackType)type;

/// 播放拍照声音
+ (void)playCameraSound;

@end

NS_ASSUME_NONNULL_END
