//
//  MasterViewController.h
//  xctest-fun
//
//  Created by Krzychu on 12.07.2015.
//  Copyright (c) 2015 Krzychu. All rights reserved.
//
// Developer #1 added his comment
// Changes by #2 developer

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;
@property (assign, readwrite) NSUInteger counter;
@property (strong, nonatomic) NSString *name;

@end

