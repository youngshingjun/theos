//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol VOIPVideoToVoiceViewDelegate <NSObject>

@optional
- (_Bool)isInitWithVideoMode;
- (void)onClickMinimizeButton;
- (void)onVoiceViewCloseMic;
- (void)onVoiceViewCloseSpeaker;
- (void)onVoiceViewHangup;
- (void)onVoiceViewOpenMic;
- (void)onVoiceViewOpenSpeaker;
@end
