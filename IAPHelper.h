//
//  IAPHelper.h
//  In App Rage
//
//  Created by NAVEEN  on 7/16/13.
//  Copyright (c) 2013 NAVEEN . All rights reserved.
//
#import <Foundation/Foundation.h>

#import <StoreKit/StoreKit.h>
UIKIT_EXTERN NSString *const IAPHelperProductPurchasedNotification;



typedef void (^RequestProductsCompletionHandler)(BOOL success, NSArray * products);

@interface IAPHelper : NSObject

- (id)initWithProductIdentifiers:(NSSet *)productIdentifiers;
- (void)requestProductsWithCompletionHandler:(RequestProductsCompletionHandler)completionHandler;
- (void)buyProduct:(SKProduct *)product;
- (void)restoreCompletedTransactions;
- (BOOL)productPurchased:(NSString *)productIdentifier;
@end

