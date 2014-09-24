//
//  ViewController.m
//  AdTapsyDemo
//
//  Created by Borislav Gizdov on 6/11/14.
//  Copyright (c) 2014 AdTapsy Ltd. All rights reserved.
//

#import "ViewController.h"
#import "AdTapsy.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [AdTapsy setDelegate:self];
    [AdTapsy showInterstitial:self];
}
- (IBAction)showAd:(id)sender {
    [AdTapsy showInterstitial:self];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


-(void)adtapsyDidClickedAd {
    NSLog(@"***adtapsyDidClickedAd***");
}

-(void)adtapsyDidFailedToShowAd {
    NSLog(@"***adtapsyDidFailedToShowAd***");
}

-(void)adtapsyDidShowAd {
    NSLog(@"***adtapsyDidShowAd***");
}

-(void)adtapsyDidSkippedAd {
    NSLog(@"***adtapsyDidSkippedAd***");
}

@end
