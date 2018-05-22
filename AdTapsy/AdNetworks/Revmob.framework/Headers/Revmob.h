
@import UIKit;
@import Foundation;

#import "RMEnums.h"
#import "RMBannerView.h"
#import "RMNativeAdObject.h"
#import "RMNativeAdView.h"


@protocol RevmobDelegate ;

@interface Revmob : NSObject

+ (void) initWithAppId:(NSString *) appId;
+ (void) setDelegate: (id <RevmobDelegate>) delegate;
+ (id <RevmobDelegate>) delegate;
+ (void) setSdkName:(NSString *)name;

+ (bool) hasAdCachedOnAdUnit:(RMAdUnits) adUnit withPlacement:(NSString *) placementId;

+ (void) cacheBanner;
+ (void) cacheBanner:(NSString *) placementId;
+ (id) getBanner;
+ (id) getBanner:(NSString *) placementId;

+ (void) cacheInterstitial;
+ (void) cacheInterstitial:(NSString *) placementId;
+ (void) showInterstitial;
+ (void) showInterstitial:(NSString *) placementId;

+ (void) cacheLink;
+ (void) cacheLink:(NSString *) placementId;
+ (void) openLink;
+ (void) openLink:(NSString *)placementId;

+ (void) cacheRewardedVideo;
+ (void) cacheRewardedVideo:(NSString *) placementId;
+ (void) showRewardedVideo;
+ (void) showRewardedVideo:(NSString *) placementId;

+ (void) cacheNativeCustom;
+ (void) cacheNativeCustom:(NSString *) placementId;
+ (id) getNativeCustom;
+ (id) getNativeCustom:(NSString *) placement;

+ (void) cacheNativeStandard:(float)width andHeight:(float)height;
+ (void) cacheNativeStandard:(NSString *)placementId withWidth:(float) width andHeight:(float) height;
+ (id) getNativeStandard;
+ (id) getNativeStandard:(NSString *) placement;

//Testing Mode
#ifdef DEBUG
+ (void) setTestingParams:(RMTestSession)testSession andTestCase:(RMTestCase)testCase;
#else
#endif

+ (void) setUserAgeMin:(NSInteger)ageMin;
+ (void) setUserAgeMax:(NSInteger)ageMax;
+ (void) setUserGender:(RMUserGender)gender;
+ (void) setUserInterests:(NSArray *)interests;
+ (void) setUserBirthday:(NSDate *)birthday;
+ (void) setUserPage:(NSString *)page;
+ (void) setUserEmail:(NSString *)email;

@end

//! Project version number for Revmob.
FOUNDATION_EXPORT double RevmobVersionNumber;

//! Project version string for Revmob.
FOUNDATION_EXPORT const unsigned char RevmobVersionString[];


@protocol RevmobDelegate <NSObject>

@optional

- (void) revmobDidCacheAd:(RMAdUnits)adUnit withPlacement:(NSString *)placement;

- (void) revmobAdClicked:(RMAdUnits)adUnit withPlacement:(NSString *) placement;

- (void) revmobAdDisplayed:(RMAdUnits)adUnit withPlacement:(NSString *)placement;

- (void) revmobAdDismissed:(RMAdUnits)adUnit withPlacement:(NSString *)placement;

- (void) revmobAdFailedToRender:(RMAdUnits)adUnit withPlacement:(NSString *)placement;

- (void) revmobUserWillLeaveAplication:(RMAdUnits)adUnit fromPlacement:(NSString* )placement;

- (void) revmobAdUnitFailedToCache:(RMAdUnits)adUnit withError:(NSError *)error withPlacement:(NSString *)placement;

- (void) revmobRewardedVideoActionDidCompleteOnPlacement:(NSString *) placement;

@end


