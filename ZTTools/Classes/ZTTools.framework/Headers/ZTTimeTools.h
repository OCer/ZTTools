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

+ (NSString *)stringFromDate:(NSDate *)date formate:(NSString *)formate;  // 把日期转为字符串

+ (NSDate *)dateFromDateString:(NSString *)dateString formate:(NSString *)formate;  // 把字符串转为日期

+ (NSString *)getTimeStampWithDate:(NSDate *)date; // 获取时间戳

+ (NSDate *)timeStampToDateWithString:(NSString *)dateString; // 把时间戳字符串转为日期

+ (NSString *)getTimeText:(NSTimeInterval)currentTime; // 时间转字符串（currentTime单位是秒

+ (NSString *)getDateString:(NSDate *)date withType:(ZTToolsDateType)type isStart:(BOOL)isStart; // 获取调整过的时间

+ (NSString *)getWeekDayWithIndex:(NSInteger)index; // 获取星期的描述 0到6 0是星期天

+ (NSString *)getWeekDayFormIndex:(NSInteger)index; // 获取星期的描述

@end

NS_ASSUME_NONNULL_END
