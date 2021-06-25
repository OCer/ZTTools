//
//  ZTViewController.m
//  ZTTools
//
//  Created by git on 04/26/2021.
//  Copyright (c) 2021 git. All rights reserved.
//

#import "ZTViewController.h"
#import <ZTTools/ZTToolsHeader.h>

@interface ZTViewController ()

@end

@implementation ZTViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.backgroundColor = UIColor.greenColor;
    [button setTitle:@"点击" forState:UIControlStateNormal];
    [button setTitleColor:UIColor.redColor forState:UIControlStateNormal];
    [button addTarget:self action:@selector(test) forControlEvents:UIControlEventTouchUpInside];
    button.frame = CGRectMake(20, 200, 100, 30);
    [self.view addSubview:button];
}

- (void)test
{
    [ZTSheetView showSheetViewWithData:@[@"1", @"2", @"3"] block:nil cancelBlock:nil];
}

@end
