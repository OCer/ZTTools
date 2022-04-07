//
//  UIView+ZT.h
//  ZTToolsSDK
//
//  Created by Asuna on 2022/3/21.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (ZT)

/// 删除view的所有子视图
- (void)removeAllSubviews;

/// 获取view的最后一个子view，如果没有就是它本身
- (UIView * _Nonnull)getLastView;

@end

NS_ASSUME_NONNULL_END
