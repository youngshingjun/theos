//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTMicBaseFaceFilter.h"

@class NSMutableArray;

@interface TTMicBaseDislocationFilter : TTMicBaseFaceFilter
{
    NSMutableArray *_locationArray;
}

- (void).cxx_destruct;
- (void)addLocation:(struct CGRect)arg1 offset:(struct CGPoint)arg2;
- (void)customWithBaseFilterParam:(id)arg1 bundlePath:(id)arg2;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;

@end
