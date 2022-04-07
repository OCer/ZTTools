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

@property(nonatomic, nonnull, copy, readonly) NSString *title;
@property(nonatomic, nonnull, copy, readonly) NSString *message;
@property(nonatomic, nonnull, strong, readonly) NSArray<ZTAlertItem *> *items;
@property(nonatomic, nonnull, strong, readonly) NSArray<UITextField *> *textFields;

+ (instancetype _Nonnull)alertWithTitle:(NSString * _Nullable)title message:(NSString * _Nullable)message background:(ZTAlertBackground * _Nullable)background;
- (instancetype _Nonnull)initWithTitle:(NSString * _Nullable)title message:(NSString * _Nullable)message background:(ZTAlertBackground * _Nullable)background;

- (void)addItem:(ZTAlertItem *_Nullable)item;
- (void)addTextFieldWithConfigurationHandler:(void (^_Nullable)(UITextField * _Nonnull textField))configurationHandler;

- (void)show; // 显示出来（应该使用这个方法来显示，而不是自己add到view里面）
- (void)hide:(BOOL)animation; // 隐藏（不要自己removeFromSuperview来隐藏）
- (void)showOrHide:(BOOL)animation;

@end
