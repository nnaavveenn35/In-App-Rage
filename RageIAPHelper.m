//
//  RageIAPHelper.m
//  In App Rage
//
//  Created by NAVEEN  on 7/16/13.
//  Copyright (c) 2013 NAVEEN . All rights reserved.
//

#import "RageIAPHelper.h"

@implementation RageIAPHelper

+ (RageIAPHelper *)sharedInstance {
    static dispatch_once_t once;
    static RageIAPHelper * sharedInstance;
    dispatch_once(&once, ^{
        NSString* plistPath = [[NSBundle mainBundle] pathForResource:@"Sample" ofType:@"plist"];
        NSArray * contentArray = [NSArray arrayWithContentsOfFile:plistPath];
        NSSet * productIdentifiers= [NSSet setWithArray:contentArray];
//        NSSet * productIdentifiers = [NSSet setWithObjects:
//                                      @"greatminds.assamkarttestingdays",
//                                      @"greatminds.newgirlinthecity",
//                                      @"greatminds.newlights",
//                                      nil];
        sharedInstance = [[self alloc] initWithProductIdentifiers:productIdentifiers];
    });
    return sharedInstance;
}

@end