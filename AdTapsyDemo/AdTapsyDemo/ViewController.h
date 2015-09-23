//
//  ViewController.h
//  AdTapsyDemo
//
//  Created by Borislav Gizdov on 6/11/14.
//  Copyright (c) 2014 AdTapsy Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AdTapsy.h"

@interface ViewController : UIViewController<AdTapsyDelegate> {
    int totalCoins;
}

@property (weak, nonatomic) IBOutlet UILabel *coinsLabel;

@end
