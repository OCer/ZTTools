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

+ (UIWindow *)getKeyWindow; // 获取keyWindow

+ (BOOL)isFullScreen; // 判断是否是全面屏

+ (NSString *)platformString;  // 获取手机型号

+ (NSString *)getAPPName; // 获取app名称

+ (NSString *)getAPPBundleIdentifier; // 获 Bundle Id

+ (NSString *)getAPPVersion; // 获取app版本

+ (NSString *)getAPPBuild; // 获取app build版本

+ (CGFloat)getSystemVersion; // 获取iOS版本号

+ (NSString *)getSystemVersionString; // 获取iOS版本号字符串

+ (NSString *)getPreferredLanguage; // 获取系统的当前语言代码

/**
 *  获取总硬盘大小(单位K)
 */
+ (double)totalDiskSpace;

/**
 *  获取剩余硬盘大小(单位K)
 */
+ (double)freeDiskSpace;

/**
 *  获取APP所占用的内存（单位：MB）
 */
+ (double)usedMemory;

+ (void)vibration; // 震动反馈 一般性震动

+ (void)vibrationWithSwitch; // Switch切换震动

+ (void)vibrationWithDone:(UINotificationFeedbackType)type; // 完成某样任务震动

@end

NS_ASSUME_NONNULL_END
