//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SightUtils : NSObject
{
}

+ (_Bool)isH265VideoByAsset:(id)arg1;
+ (_Bool)isH265VideoByPath:(id)arg1;
+ (struct CGSize)videoFrameSizeWithVideo:(id)arg1;
+ (_Bool)isThumbImage:(id)arg1 matchVideo:(id)arg2;
+ (_Bool)shouldUpdateThumbImageWithSightVideoPath:(id)arg1 thumbImagePath:(id)arg2;
+ (_Bool)generateThumbImageFromVideo:(id)arg1 toThumbImage:(id)arg2;
+ (_Bool)isVideoPlayable:(id)arg1;
+ (id)thumbForVideoWithAsset:(id)arg1 maxWidth:(int)arg2 andMaxHeight:(int)arg3;
+ (id)generateVideoThumbImageWithAsset:(id)arg1 atTime:(double)arg2;
+ (id)resizeVideoThumb:(id)arg1;
+ (id)thumbForVideoWithAsset:(id)arg1 atTime:(double)arg2;
+ (id)thumbForVideoWithPath:(id)arg1;
+ (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;

@end
