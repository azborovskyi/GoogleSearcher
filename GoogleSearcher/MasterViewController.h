//
//  MasterViewController.h
//  GoogleSearcher
//
//  Created by Andrew Zborovskyi on 3/18/13.
//  Copyright (c) 2013 Andrew Zborovskyi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
