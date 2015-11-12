//
//  AdTapsy.h
//  AdTapsySDK
//
//  Created by Borislav Gizdov on 26.03.14.
//  Copyright (c) 2014 г. AdTapsy Ltd. All rights reserved.
//  <support@adtapsy.com>
//

#import <UIKit/UIKit.h>


/**
 * AdTapsy delegate to receive callacks from SDK
 */
@protocol AdTapsyDelegate <NSObject>

@optional
/**
 * Called when Interstitial ad shown successfuly
 */
- (void) adtapsyDidShowInterstitialAd;

/**
 * Called when Interstitial ad failed to show. All used ad networks has no fill.
 */
- (void) adtapsyDidFailedToShowInterstitialAd;

/**
 * Called when user clicked on Interstitial ad
 */
- (void) adtapsyDidClickedInterstitialAd;

/**
 * Called when user skipped Interstitial ad (clicked X button to close)
 */
- (void) adtapsyDidSkippedInterstitialAd;


/**
 * Called when at least one Interstitial ad is loaded and ready to show
 */
- (void) adtapsyDidCachedInterstitialAd;


/**
 * Called when rewarded video ad shown successfuly
 */
- (void) adtapsyDidShowRewardedVideoAd;

/**
 * Called when rewarded video ad failed to show. All used ad networks has no fill.
 */
- (void) adtapsyDidFailedToShowRewardedVideoAd;

/**
 * Called when user clicked on rewarded video ad
 */
- (void) adtapsyDidClickedRewardedVideoAd;

/**
 * Called when user skipped rewarded video ad (clicked X button to close)
 */
- (void) adtapsyDidSkippedRewardedVideoAd;


/**
 * Called when at least one rewarded video ad is loaded and ready to show
 */
- (void) adtapsyDidCachedRewardedVideoAd;

/**
 * Called when user earned reward for video view
 */
-(void) adtapsyDidEarnedReward:(BOOL) success andAmount:(int) amount;

@end

/**
 * AdTapsy SDK main class
 */
@interface AdTapsy : NSObject;

/**
 * Use startSession method to start session in app delegate application didFinishLaunchingWithOptions
 */
+(void) startSession: (NSString*) appId;

/**
 * Use showInterstitial method in places in the app where you want to show interstitial or video ad
 */
+(void) showInterstitial: (UIViewController*) viewController;

/**
 * Use showRewardedVideo method in places in the app where you want to show rewarded video ad
 */
+(void) showRewardedVideo: (UIViewController*) viewController;

/**
 * Check if any ads cached and ready to show
 */
+(BOOL) isInterstitialReadyToShow;

/**
 * Check if any ads cached and ready to show
 */
+(BOOL) isRewardedVideoReadyToShow;

/**
 * Call this method on applicationWillTerminate in app delegate
 */
+(void) destroy;

/**
 * Reload configuration from AdTapsy server
 */
+(void) reload;

/**
 * Swtich to next network by priority. You don't need to call this it is automatically
 */
+(void) next:(NSString*) zone;

/**
 * Returns AdTapsy singleton instance
 */
+ (AdTapsy *) shared;

/**
 * Check if any ads loaded
 */
-(BOOL) hasLoadedAd: (NSString*) adtapsyZone;

/**
 * Returns used AdTapsy App ID
 */
+(NSString*) appId;

/**
 * Enable test mode for AdMob and RevMob, for other use ad networks dashboards
 */
+(void) setTestMode: (BOOL) isTestModeEnabled andTestDevices: (NSArray *) testDevices;

/**
 * Set amount of virtual currency when rewarded video is watched
 */
+(void) setRewardedVideoAmount: (int) amount;

/**
 * Get rewarded video amount
 */
+(int) rewardedVideoAmount;

+(void) setEngine: (NSString*) engine;

-(NSString*) engine;

/**
 * Call this method before AdTapsy initialization if you are using server side callbacks for rewarded videos
 */
+(void) setUserIdentifier: (NSString*) userId;

+(NSString*) userIdentifier;

-(BOOL) isTestModeEnabled;
-(NSArray*) testDevices;
-(NSString*) showRequestZone;
-(BOOL) isForChildren;


+(void) setDelegate: (id<AdTapsyDelegate>) delegate;

@property (nonatomic, assign) id <AdTapsyDelegate> delegate;

/**
 * Show popup before show rewarded video. For most ad networks this should be set in their dashboard
 */
+(void) setRewardedVideoPrePopupEnabled: (BOOL) isEnabled;
@property (nonatomic, assign) BOOL rewardedVideoPrePopupEnabled;

/**
 * Show popup after show rewarded video. For most ad networks this should be set in their dashboard
 */
+(void) setRewardedVideoPostPopupEnabled: (BOOL) isEnabled;
@property (nonatomic, assign) BOOL rewardedVideoPostPopupEnabled;


@end
