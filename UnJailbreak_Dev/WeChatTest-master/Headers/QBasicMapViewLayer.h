//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface QBasicMapViewLayer : CALayer
{
    double _zoomLevel;
    double _rotation;
    double _overlooking;
    struct CGPoint _centerCoordinate;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
@property(nonatomic) double overlooking; // @synthesize overlooking=_overlooking;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) struct CGPoint centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
- (id)basicMapView;

@end
