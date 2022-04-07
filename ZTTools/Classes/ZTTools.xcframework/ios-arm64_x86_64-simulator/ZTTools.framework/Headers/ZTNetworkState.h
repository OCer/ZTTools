//
//  NetworkState.h
//  YT
//
//  Created by Cer on 2017/12/29.
//  Copyright © 2017年 Cer. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, ZTNetworkStatus) {
    ZTNetworkStatusUnknown          = -1,
    ZTNetworkStatusNotReachable     = 0,
    ZTNetworkStatusReachableViaWWAN = 1,
    ZTNetworkStatusReachableViaWiFi = 2,
};

typedef void (^ZTNetworkStateChangeBlock)(ZTNetworkStatus status);

@interface ZTNetworkState : NSObject

+ (instancetype _Nonnull)sharedNetworkState;

/// 当前网络状态
- (ZTNetworkStatus)state;

/// 当前网络状态字符串
- (NSString * _Nonnull)stateString;

/// 是否连接有网络，YES是有
- (BOOL)checkNetWorkIsOk;

/// 添加网络变化回调（会强引用，需要外部自行weak）；key是唯一标识
- (BOOL)addNetworkStateChangeBlock:(ZTNetworkStateChangeBlock _Nonnull)block withKey:(NSString * _Nonnull)key;

/// 删除网络变化回调；当需要监听的对象被销毁时，需要把block删掉
- (void)removeNetworkStateChangeBlockWithKey:(NSString * _Nonnull)key;

@end
