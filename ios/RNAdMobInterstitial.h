#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#else
<<<<<<< HEAD
// #import "RCTBridgeModule.h"
#import <React/RCTBridgeModule.h>
#import "RCTEventDispatcher.h"
=======
#import "RCTBridgeModule.h"
#import "RCTEventEmitter.h"
>>>>>>> d7ed001279540b44d335defa9c9fbc4963123d0f
#endif

@import GoogleMobileAds;

@interface RNAdMobInterstitial : RCTEventEmitter <RCTBridgeModule, GADInterstitialDelegate>
@end
