//
//  NetworkState.h
//  YT
//
//  Created by Cer on 2017/12/29.
//  Copyright © 2017年 Cer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>

typedef void (^ZTNetworkStateChangeBlock)(AFNetworkReachabilityStatus status);

@interface ZTNetworkState : NSObject

+ (instancetype)sharedNetworkState;      // 获取单例

- (AFNetworkReachabilityStatus)state; // 当前网络状态
- (NSString *)stateString;
- (BOOL)checkNetWorkIsOk; //是否有网络，YES是有
- (BOOL)addNetworkStateChangeBlock:(ZTNetworkStateChangeBlock)block withKey:(NSString *)key; // key是唯一标识
- (void)removeNetworkStateChangeBlockWithKey:(NSString *)key; // 当需要监听的对象被销毁时，需要把block删掉

@end
