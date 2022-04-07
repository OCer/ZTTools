//
//  ZTSheetView.h
//  ChartsDemo
//
//  Created by Asuna on 2020/12/8.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    ZTSheetViewTypeNormal = 0,
    ZTSheetViewTypeDay,
    ZTSheetViewTypeMonth,
    ZTSheetViewTypeYear
} ZTSheetViewType;

typedef void(^ZTSheetViewBlock)(int index);
typedef void(^ZTSheetViewTimeBlock)(NSDate * _Nonnull date);
typedef void(^ZTSheetViewCancelBlock)(void);

NS_ASSUME_NONNULL_BEGIN

/// 一个能展示日期或者自定义文本的Sheet
@interface ZTSheetView : UIView

+ (void)showSheetViewWithData:(NSArray<NSString *> *)data block:(ZTSheetViewBlock _Nullable)block cancelBlock:(ZTSheetViewCancelBlock _Nullable)cancelBlock;
+ (void)showSheetViewDayWithDate:(NSDate *)date block:(ZTSheetViewTimeBlock _Nullable)block cancelBlock:(ZTSheetViewCancelBlock _Nullable)cancelBlock;
+ (void)showSheetViewMonthWithDate:(NSDate *)date block:(ZTSheetViewTimeBlock _Nullable)block cancelBlock:(ZTSheetViewCancelBlock _Nullable)cancelBlock;
+ (void)showSheetViewYearWithDate:(NSDate *)date block:(ZTSheetViewTimeBlock _Nullable)block cancelBlock:(ZTSheetViewCancelBlock _Nullable)cancelBlock;

@end

NS_ASSUME_NONNULL_END
