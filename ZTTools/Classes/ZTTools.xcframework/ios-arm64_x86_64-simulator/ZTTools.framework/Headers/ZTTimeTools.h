//
//  ZTTimeTools.h
//  ZTTools
//
//  Created by Asuna on 2021/4/27.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    ZTToolsDateTypeYear = 0,
    ZTToolsDateTypeMonth,
    ZTToolsDateTypeDay
} ZTToolsDateType;

NS_ASSUME_NONNULL_BEGIN

@interface ZTTimeTools : NSObject

/// 把日期转为字符串
+ (NSString * _Nonnull)stringFromDate:(NSDate * _Nonnull)date formate:(NSString * _Nonnull)formate;

/// 把字符串转为日期
+ (NSDate * _Nonnull)dateFromDateString:(NSString * _Nonnull)dateString formate:(NSString * _Nonnull)formate;

/// 获取时间戳
+ (NSString * _Nonnull)getTimeStampWithDate:(NSDate * _Nonnull)date;

/// 把时间戳字符串转为日期
+ (NSDate * _Nonnull)timeStampToDateWithString:(NSString * _Nonnull)dateString;

// 时间转字符串（currentTime单位是秒）
+ (NSString * _Nonnull)getTimeText:(NSTimeInterval)currentTime;

/// 获取调整过的时间
+ (NSString * _Nonnull)getDateString:(NSDate * _Nonnull)date withType:(ZTToolsDateType)type isStart:(BOOL)isStart;

/// 获取周几的描述 0到6 0是周日
+ (NSString * _Nonnull)getWeekDayWithIndex:(NSInteger)index;

/// 获取星期几的描述 0到6 0是星期天
+ (NSString * _Nonnull)getWeekDayFormIndex:(NSInteger)index;

@end

NS_ASSUME_NONNULL_END
