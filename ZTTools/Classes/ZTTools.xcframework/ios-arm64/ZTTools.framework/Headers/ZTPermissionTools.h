//
//  ZTPermissionTools.h
//  ZTTools
//
//  Created by Asuna on 2021/4/27.
//

#import <Foundation/Foundation.h>
@import Photos;

NS_ASSUME_NONNULL_BEGIN

@interface ZTPermissionTools : NSObject

/// 检测相册访问权限
+ (void)checkPhotoLibraryPermission:(void(^_Nullable)(PHAuthorizationStatus status))block;

/// 判断用户是否打开了消息推送
+ (void)isOpenMessageNotificationServiceWithBlock:(void (^_Nullable)(BOOL isOpen))block;

@end

NS_ASSUME_NONNULL_END
