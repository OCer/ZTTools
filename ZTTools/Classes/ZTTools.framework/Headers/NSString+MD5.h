//
//  NSString+MD5.h
//  WeiBo
//
//  Created by Cer on 14-9-16.
//  Copyright (c) 2014年 Cer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (MD5)

- (NSString *)md5HexDigest; // 获取MD5

- (NSString *)imageType; // 获取url中图片后缀

@end
