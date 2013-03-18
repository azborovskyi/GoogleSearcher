//
//  DetailViewController.h
//  GoogleSearcher
//
//  Created by Andrew Zborovskyi on 3/18/13.
//  Copyright (c) 2013 Andrew Zborovskyi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
