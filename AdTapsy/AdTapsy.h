//
//  AdTapsy.h
//  AdTapsySDK
//
//  Created by Borislav Gizdov on 26.03.14.
//  Copyright (c) 2014 г. AdTapsy Ltd. All rights reserved.
//  <info@adtapsy.com>
//

#import <UIKit/UIKit.h>


/**
 * AdTapsy delegate to receive callacks from SDK
 */
@protocol AdTapsyDelegate <NSObject>

@optional
/**
 * Called when ad shown successfuly
 */
- (void) adtapsyDidShowAd;

/**
 * Called when ad failed to show. All used ad networks has no fill.
 */
- (void) adtapsyDidFailedToShowAd;

/**
 * Called when user clicked on ad
 */
- (void) adtapsyDidClickedAd;

/**
 * Called when user skipped ad (clicked X button to close)
 */
- (void) adtapsyDidSkippedAd;

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
 * Destroy call this method on applicationWillTerminate in app delegate
 */
+(void) destroy;

/**
 * Reload configuration from AdTapsy server
 */
+(void) reload;

/**
 * Swtich to next network by priority. You don't need to call this it is automatically
 */
+(void) next;

/**
 * Returns AdTapsy singleton instance
 */
+ (AdTapsy *) shared;

/**
 * Check if any ads loaded
 */
-(BOOL) hasLoadedAd;

/**
 * Returns used AdTapsy App ID
 */
+(NSString*) appId;


+(void) setDelegate: (id<AdTapsyDelegate>) delegate;

 @property (nonatomic, assign) id <AdTapsyDelegate> delegate;

@end
