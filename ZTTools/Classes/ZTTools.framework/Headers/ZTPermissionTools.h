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

+ (void)checkPhotoLibraryPermission:(void(^)(PHAuthorizationStatus status))block; // 检测相册访问权限

+ (void)isOpenMessageNotificationServiceWithBlock:(void (^)(BOOL isOpen))block; // 判断用户是否打开了消息推送

@end

NS_ASSUME_NONNULL_END
