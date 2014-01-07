//
//  DetailViewController.h
//  SampleiOSProject
//
//  Created by FabNeeraj on 1/7/14.
//  Copyright (c) 2014 FabNeeraj. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
