//
//  DetailViewController.h
//  In App Rage
//
//  Created by NAVEEN  on 7/16/13.
//  Copyright (c) 2013 NAVEEN . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
