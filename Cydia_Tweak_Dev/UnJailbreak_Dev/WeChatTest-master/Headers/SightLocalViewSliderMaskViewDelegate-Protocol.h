//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SightLocalViewSliderMaskView;

@protocol SightLocalViewSliderMaskViewDelegate <NSObject>

@optional
- (_Bool)queryIsCropAllowEnlarge;
- (_Bool)queryIsSystemCrop;
- (void)shouldSwitchToLargeMode:(_Bool)arg1;
- (void)thumbImagesCollectionViewContentInsetNeedChange;
- (void)sightLocalViewSliderMaskView:(SightLocalViewSliderMaskView *)arg1 didStopMovingAtPosition:(double)arg2 isStartFlag:(_Bool)arg3;
- (void)sightLocalViewSliderMaskViewPlayFlagDidChange:(SightLocalViewSliderMaskView *)arg1;
@end
