//
//  ZTTools.h
//  ZTTools
//
//  Created by Asuna on 2021/4/27.
//

#import <Foundation/Foundation.h>
@import Photos;

@interface ZTTools : NSObject

/// 正则表达式，匹配并返回结果集；isCaseInsensitive值为YES时，不区分大小写
+ (NSMutableArray * _Nonnull)regex:(NSString * _Nonnull)regex AndText:(NSString * _Nonnull)text isCaseInsensitive:(BOOL)isCaseInsensitive;

/// 正则表达式，返回匹配个数；isCaseInsensitive值为YES时，不区分大小写
+ (NSUInteger)numberOfRegex:(NSString * _Nonnull)regex AndText:(NSString * _Nonnull)text isCaseInsensitive:(BOOL)isCaseInsensitive;

/// 判断内容是否全部为空格  yes 全部为空格  no 不是
+ (BOOL)isEmpty:(NSString * _Nullable)str;

/// 判断空对象
+ (BOOL)isNull:(id _Nullable)object;

/// 判断是否全是特殊字符
+ (BOOL)isAllCharacterString:(NSString * _Nullable)string;

/// 该字符串是否是同一个字符
+ (BOOL)isSameStringFormText:(NSString * _Nullable)text;

/// 判断是否有自带表情
+ (BOOL)isContainsEmoji:(NSString * _Nonnull)text;

/// 验证身份证格式是否是正确的
+ (BOOL)checkUserIdCard:(NSString * _Nonnull)idCard;

/// 把类的属性转成字典，去掉null对象值
+ (NSDictionary * _Nonnull)getObjectDataNotNil:(id _Nonnull)obj;

/// 把类的属性转成字典
+ (NSDictionary * _Nonnull)getObjectData:(id _Nonnull)obj;

/// 重置类的属性
+ (void)resetClass:(id _Nonnull)obj;

/// json格式的data转字典
+ (NSDictionary * _Nullable)JSONObjectWithData:(NSData * _Nonnull)data;

/// json字符串转字典
+ (NSDictionary * _Nullable)JSONObjectWithString:(NSString * _Nonnull)json;

/// 字典转json字符串
+ (NSString * _Nullable)JSONStringWithDic:(NSDictionary * _Nullable)dic;

/// data转json字符串
+ (NSString * _Nullable)JSONStringWithData:(NSData * _Nullable)jsonData;

/// 解析字幕
+ (NSDictionary * _Nullable)parsingSubtitles:(NSString * _Nullable)text;

/// 数据大小转字符串
+ (NSString * _Nonnull)fileSizeToString:(unsigned long long)fileSize;

/// 根据path获取文件大小
+ (NSInteger)getFileSizeWithPath:(NSString * _Nonnull)path;

/// 根据path获取视频时长(秒)
+ (int)getVideoDurationWithPath:(NSString * _Nonnull)path;

/// 快速获取一个error
+ (NSError * _Nonnull)getErrorWithTitle:(NSString * _Nullable)title message:(NSString * _Nullable)message text:(NSString * _Nullable)text code:(NSInteger)code;

/// 获取排序过的key，YES是升序
+ (NSArray<NSString *> * _Nonnull)getKeysWithDic:(NSDictionary * _Nonnull)dic withAscending:(BOOL)isAscending;

/// 获取自定义相册，如果没有则创建
+ (PHAssetCollection * _Nullable)createCollectionWithTitle:(NSString * _Nonnull)title;

/// 保存图片到自定义相册（异步）
+ (void)saveImageToAlbumWithImage:(UIImage * _Nonnull)image
                toAssetCollection:(PHAssetCollection * _Nonnull)targetCollection
                  completionBlock:(void (^_Nullable)(NSError * _Nullable error))completionBlock;

/// 保存图片到自定义相册（同步）
+ (void)saveImageSynchronousToAlbumWithImage:(UIImage * _Nonnull)image
                           toAssetCollection:(PHAssetCollection * _Nonnull)targetCollection
                             completionBlock:(void (^_Nullable)(NSError * _Nullable error))completionBlock;

/// 保存视频到自定义相册（异步）
+ (void)saveVideoToAlbumWithURL:(NSURL * _Nonnull)url
              toAssetCollection:(PHAssetCollection * _Nonnull)targetCollection
                completionBlock:(void (^_Nullable)(NSError * _Nullable error))completionBlock;

/// 保存视频到自定义相册（同步）
+ (void)saveVideoSynchronousToAlbumWithURL:(NSURL * _Nonnull)url
                         toAssetCollection:(PHAssetCollection * _Nonnull)targetCollection
                           completionBlock:(void (^_Nullable)(NSError * _Nullable error))completionBlock;

/// 获取组件版本
+ (NSString * _Nonnull)sdkVersion;

@end
