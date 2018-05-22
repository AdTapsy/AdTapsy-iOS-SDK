
@import Foundation;

@interface RMNativeAdObject : NSObject 

@property (readonly) NSString *placement,
*callToAction,
*appDescription, //cannot use "description" as a variable name
*iconImageUrl,
*mainImageUrl,
*market,
*price,
*ratingStars,
*ratingUsers,
*title;

- (RMNativeAdObject *)initWithPlacement:(NSString *)placementId;
- (void)sendImpressionEvent;
- (void)sendClickEvent;

@end
