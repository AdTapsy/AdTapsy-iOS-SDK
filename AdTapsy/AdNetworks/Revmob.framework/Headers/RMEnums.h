
@import Foundation;

typedef enum {
    RMBanner = 0,
    RMInterstitial = 1,
    RMLink = 2,
    RMRewardedVideo = 3,
    RMNativeAd = 4
} RMAdUnits;

typedef enum {
    RMUserGenderUndefined = 0,
    RMUserGenderMale = 1,
    RMUserGenderFemale = 2
} RMUserGender;

typedef enum {
	RMNativeAdStandard = 0,
	RMNativeAdCustom = 1
} RMNativeType;

typedef enum {
    RMTestCase1_0 = 0,
    RMTestCase1_1 = 1,
    RMTestCase1_2 = 2,
    RMTestCase1_3 = 3,
    RMTestCase1_4 = 4,
    RMTestCase1_5 = 5,
    RMTestCase1_6 = 6,
} RMTestCase;

typedef enum {
    RMTestSession_1_0 = 0,
    RMTestSession_1_1 = 1,
    RMTestSession_1_2 = 2,
    RMTestSession_1_3 = 3,
    RMTestSession_1_4 = 4,
    RMTestSession_1_5 = 5,
    RMTestSession_1_6 = 6,
    RMTestSession_1_7 = 7,
    RMTestSession_1_8 = 8,
    RMTestSession_1_9 = 9,
    RMTestSession_1_10 = 10,
    RMTestSession_1_11 = 11,
    RMTestSession_1_12 = 12,
    RMTestSession_1_13 = 13,
} RMTestSession;

@interface RMEnums : NSObject

@end
