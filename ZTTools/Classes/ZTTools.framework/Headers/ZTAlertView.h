//
//  ZTAlertView.h
//  ZTAlertViewDemo
//
//  Created by Cer on 2019/1/21.
//  Copyright © 2019 Cer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZTAlertItem.h"
#import "ZTAlertBackground.h"

@interface ZTAlertView : UIView

@property(nonatomic, copy, readonly) NSString *title;
@property(nonatomic, copy, readonly) NSString *message;
@property(nonatomic, strong, readonly) NSArray<ZTAlertItem *> *items;
@property(nonatomic, strong, readonly) NSArray<UITextField *> *textFields;

+ (instancetype)alertWithTitle:(NSString *)title message:(NSString *)message background:(ZTAlertBackground *)background;
- (instancetype)initWithTitle:(NSString *)title message:(NSString *)message background:(ZTAlertBackground *)background;

- (void)addItem:(ZTAlertItem *)item;
- (void)addTextFieldWithConfigurationHandler:(void (^)(UITextField *textField))configurationHandler;

- (void)show; // 显示出来（应该使用这个方法来显示，而不是自己add到view里面）
- (void)hide:(BOOL)animation; // 隐藏（不要自己removeFromSuperview来隐藏）
- (void)showOrHide:(BOOL)animation;

@end
