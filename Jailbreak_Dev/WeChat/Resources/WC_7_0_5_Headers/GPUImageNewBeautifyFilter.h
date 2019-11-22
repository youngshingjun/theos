//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageBilateralFilter, GPUImageBrightnessFilter, GPUImageCannyEdgeDetectionFilter, GPUImageCombinationFilterRGB, GPUImageHSBFilter, GPUImageSobelEdgeDetectionFilter;

@interface GPUImageNewBeautifyFilter : GPUImageFilterGroup
{
    GPUImageBilateralFilter *bilateralFilter;
    GPUImageCannyEdgeDetectionFilter *cannyEdgeFilter;
    GPUImageSobelEdgeDetectionFilter *sobelEdgeFilter;
    GPUImageCombinationFilterRGB *combinationFilter;
    GPUImageHSBFilter *hsbFilter;
    GPUImageBrightnessFilter *brightFilter;
    _Bool _texSizeSet;
    int _showRegion;
    double _intensity;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
- (void)setBrightness:(double)arg1;
- (void)setContrast:(double)arg1;
- (void)setRed:(double)arg1;
- (void)setRegionShow:(int)arg1;
- (void)setShowMode:(int)arg1;
@property(nonatomic) int showRegion; // @synthesize showRegion=_showRegion;
@property(nonatomic) _Bool texSizeSet; // @synthesize texSizeSet=_texSizeSet;

@end
