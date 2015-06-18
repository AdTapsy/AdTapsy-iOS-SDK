#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol RevMobAdsDelegate <NSObject>


@optional

# pragma mark Ad Callbacks (Fullscreen, Banner and Popup)

/**
 Fired when session is started.
 */
- (void)revmobSessionIsStarted;

/**
 Fired when session fails to start.
 */
- (void)revmobSessionNotStartedWithError:(NSError *)error;



/******** Ad Callbacks *******/
/**
 Fired by Fullscreen, banner and popup. Called when the communication with the server is finished with success.
 */
- (void)revmobAdDidReceive;

/**
 Fired by Fullscreen, banner and popup. Called when the communication with the server is finished with error.
 
 @param error: contains error information.
 */
- (void)revmobAdDidFailWithError:(NSError *)error;

/**
 Fired by Fullscreen, banner and popup. Called when the Ad is displayed in the screen.
 */
- (void)revmobAdDisplayed;

/**
 Fired by Fullscreen, banner, button and popup.
 */
- (void)revmobUserClickedInTheAd;

/**
 Fired by Fullscreen and popup.
 */
- (void)revmobUserClosedTheAd;



/******** Video Callbacks *******/
/**
 Fired when video is received.
 */
- (void)revmobVideoDidLoad;

/**
 Fired when the video is not completely loaded or not even loading.
 */
- (void)revmobVideoNotCompletelyLoaded;

/**
 Fired when the video starts.
 */
- (void)revmobVideoDidStart;

/**
 Fired when the video finished.
 */
- (void)revmobVideoDidFinish;



/******** Rewarded Video Callbacks *******/
/**
 Fired when rewarded video is loaded.
 */
- (void)revmobRewardedVideoDidLoad;

/**
 Fired when the rewarded video is not completely loaded or not even loading.
 */
- (void)revmobRewardedVideoNotCompletelyLoaded;

/**
 Fired when the rewarded video starts.
 */
- (void)revmobRewardedVideoDidStart;

/**
 Fired when the rewarded video finished.
 */
- (void)revmobRewardedVideoDidFinish;

/**
 Called if user the rewarded video completed.
 */
- (void)revmobRewardedVideoComplete;

/**
 Called when the Rewarded Video Pre-Roll is displayed.
 */
- (void)revmobRewardedPreRollDisplayed;


# pragma mark Advertiser Callbacks

/**
 Called if install is successfully registered
 */
- (void)installDidReceive;

/**
 Called if install couldn't be registered
 */
- (void)installDidFail;


@end
