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
    // Do any additional setup after loading the view, typically from a nib.
    
    [AdTapsy setDelegate:self];
    [AdTapsy setRewardedVideoAmount:10];
    [AdTapsy setRewardedVideoPrePopupEnabled:YES];
    [AdTapsy setRewardedVideoPostPopupEnabled:YES];
    totalCoins = 0;
}

- (IBAction)showAd:(id)sender {
    if ([AdTapsy isInterstitialReadyToShow]) {
        NSLog(@"Ad is ready be shown");
        [AdTapsy showInterstitial:self];
    } else {
        NSLog(@"Ad is not ready to be shown");
    }
}

- (IBAction)showRewardedVideo:(id)sender {
    if ([AdTapsy isRewardedVideoReadyToShow]) {
        NSLog(@"Ad is ready be shown");
        [AdTapsy showRewardedVideo:self];
    } else {
        NSLog(@"Ad is not ready to be shown");
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


-(void)adtapsyDidCachedInterstitialAd {
    NSLog(@"***adtapsyDidCachedInterstitialAd***");
}

-(void)adtapsyDidCachedRewardedVideoAd {
    NSLog(@"***adtapsyDidCachedRewardedVideoAd***");
}

-(void)adtapsyDidClickedInterstitialAd {
    NSLog(@"***adtapsyDidClickedInterstitialAd***");
}

-(void)adtapsyDidClickedRewardedVideoAd {
    NSLog(@"***adtapsyDidClickedRewardedVideoAd***");
}

-(void)adtapsyDidFailedToShowInterstitialAd {
    NSLog(@"***adtapsyDidFailedToShowInterstitialAd***");
}

-(void)adtapsyDidFailedToShowRewardedVideoAd {
    NSLog(@"***adtapsyDidFailedToShowRewardedVideoAd***");
}

-(void)adtapsyDidShowInterstitialAd {
    NSLog(@"***adtapsyDidShowInterstitialAd***");
}

-(void)adtapsyDidShowRewardedVideoAd {
    NSLog(@"***adtapsyDidShowRewardedVideoAd***");
}

-(void)adtapsyDidSkippedInterstitialAd {
    NSLog(@"***adtapsyDidSkippedInterstitialAd***");
}

-(void)adtapsyDidSkippedRewardedVideoAd {
    NSLog(@"***adtapsyDidSkippedRewardedVideoAd***");
}


-(void)adtapsyDidEarnedReward:(BOOL)success andAmount:(int)amount {
    NSLog(@"***adtapsyDidEarnedReward*** success: %d amount %d", success, amount);
    totalCoins = totalCoins + amount;
    [_coinsLabel setText:[NSString stringWithFormat:@"Coins: %d", totalCoins]];
}


@end
