//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMVoidStringCallback, NSData, NSString;

@protocol MMIPlatformUtil <NSObject>
- (int)androidAPILevel;
- (long long)androidDpiLevel;
- (NSData *)base64Decode:(NSString *)arg1;
- (NSString *)base64Encode:(NSData *)arg1;
- (NSString *)currentLanguageCode;
- (long long)currentPlatform;
- (NSString *)genUUID;
- (float)getBottomSafeAreaHeight;
- (_Bool)getExptBoolValue:(NSString *)arg1;
- (float)getLoigcalResolutionHeight;
- (float)getLoigcalResolutionWidth;
- (NSString *)getMemoryKVString:(NSString *)arg1;
- (float)getNavigationBarHeight;
- (float)getPadSplitHeight;
- (float)getPadSplitWidth;
- (NSString *)getPlatformString:(NSString *)arg1;
- (float)getPx:(float)arg1;
- (_Bool)getRedDotStatus:(NSString *)arg1;
- (NSString *)getRedDotWording:(NSString *)arg1;
- (float)getScreenBrightness;
- (float)getStatusBarHeight;
- (long long)iOSDevice;
- (NSString *)iOSVersion;
- (_Bool)isNetworkConnected;
- (_Bool)isPad;
- (void)makesureLonglink;
- (NSString *)md5:(NSString *)arg1;
- (void)playVibration;
- (void)setIdleTimerDisable:(_Bool)arg1;
- (void)setLanguageChangeCallbackImpl:(MMVoidStringCallback *)arg1;
- (void)setRedDotStatus:(NSString *)arg1 value:(_Bool)arg2;
- (void)setScreenBrightness:(float)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
@end
