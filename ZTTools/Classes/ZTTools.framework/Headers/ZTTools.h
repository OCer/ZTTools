//
//  ZTTools.h
//  ZTTools
//
//  Created by Asuna on 2021/4/27.
//

#import <Foundation/Foundation.h>

@interface ZTTools : NSObject

+ (NSMutableArray *)regex:(NSString *)regex AndText:(NSString *)text;  // 正则表达式，匹配并返回结果集

+ (NSUInteger)numberOfRegex:(NSString *)regex AndText:(NSString *)text; // 正则表达式，返回匹配个数

+ (BOOL)isEmpty:(NSString *)str; // 判断内容是否全部为空格  yes 全部为空格  no 不是

+ (BOOL)isNull:(id)object; // 判断空对象

+ (BOOL)isAllCharacterString:(NSString *)string; // 判断是否全是特殊字符

+ (BOOL)isSameStringFormText:(NSString *)text; // 该字符串是否是同一个字符

+ (BOOL)isContainsEmoji:(NSString *)text;  // 判断是否有自带表情

+ (BOOL)checkUserIdCard:(NSString *)idCard; // 验证身份证格式是否是正确的

+ (NSDictionary *)getObjectDataNotNil:(id)obj; // 把类的属性转成字典，去掉null对象值

+ (NSDictionary *)getObjectData:(id)obj; // 把类的属性转成字典

+ (void)resetClass:(id)obj; // 重置类的属性

+ (NSDictionary *)JSONObjectWithData:(NSData *)data; // json格式的data转字典

+ (NSDictionary *)JSONObjectWithString:(NSString *)json; // json字符串转字典

+ (NSString *)JSONStringWithDic:(NSDictionary *)dic; // 字典转json字符串

+ (NSString *)JSONStringWithData:(NSData *)jsonData; // data转json字符串

+ (NSDictionary *)parsingSubtitles:(NSString *)text; // 解析字幕

+ (NSString *)typeForImageData:(NSData *)data; // 获取图片的格式

+ (NSString *)fileSizeToString:(unsigned long long)fileSize; // 数据大小转字符串

+ (NSInteger)getFileSizeWithPath:(NSString *)path; // 根据path获取文件大小

+ (int)getVideoDurationWithPath:(NSString *)path; // 根据path获取视频时长(秒)

+ (NSError *)getErrorWithTitle:(NSString *)title message:(NSString *)message text:(NSString *)text code:(NSInteger)code; // 快速获取一个error

+ (NSArray<NSString *> *)getKeysWithDic:(NSDictionary *)dic withAscending:(BOOL)isAscending; // 获取排序过的key，YES是升序

+ (void)playCameraSound; // 播放拍照声音

@end
