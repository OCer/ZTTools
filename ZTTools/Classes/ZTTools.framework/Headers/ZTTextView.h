//
//  ZTTextView.h
//  ChartsDemo
//
//  Created by Asuna on 2020/12/10.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 去掉了除滑动外的事件，适用于可滚动的多行文本显示
@interface ZTTextView : UITextView

/// 滑动手势
@property(nonatomic, strong, readonly) UIPanGestureRecognizer *scrollGestureRecognizer;

/// 单击URL手势
@property(nonatomic, strong, readonly) UITapGestureRecognizer *linkGestureRecognizer;

@end

NS_ASSUME_NONNULL_END
