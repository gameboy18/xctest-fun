//
//  DetailViewController.h
//  xctest-fun
//
//  Created by Krzychu on 12.07.2015.
//  Copyright (c) 2015 Krzychu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

