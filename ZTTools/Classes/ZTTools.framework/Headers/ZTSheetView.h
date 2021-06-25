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

@interface ZTSheetView : UIView

+ (void)showSheetViewWithData:(NSArray<NSString *> *)data block:(ZTSheetViewBlock)block cancelBlock:(ZTSheetViewCancelBlock _Nullable)cancelBlock;
+ (void)showSheetViewDayWithDate:(NSDate *)date block:(ZTSheetViewTimeBlock)block cancelBlock:(ZTSheetViewCancelBlock _Nullable)cancelBlock;
+ (void)showSheetViewMonthWithDate:(NSDate *)date block:(ZTSheetViewTimeBlock)block cancelBlock:(ZTSheetViewCancelBlock _Nullable)cancelBlock;
+ (void)showSheetViewYearWithDate:(NSDate *)date block:(ZTSheetViewTimeBlock)block cancelBlock:(ZTSheetViewCancelBlock _Nullable)cancelBlock;

@end

NS_ASSUME_NONNULL_END
