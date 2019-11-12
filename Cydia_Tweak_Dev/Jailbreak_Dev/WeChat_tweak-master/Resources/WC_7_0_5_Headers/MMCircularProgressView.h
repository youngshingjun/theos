//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMTimer, NSArray, UIColor, UIImage, UIImageView;

@interface MMCircularProgressView : UIView
{
    _Bool _clockwise;
    UIColor *_fillColor;
    UIColor *_progressColor;
    UIImage *_progressImage;
    UIImage *_borderImage;
    double _edgeRatio;
    double _innerPadding;
    UIImageView *_borderImageView;
    NSArray *_steps;
    double _max;
    double _min;
    double _current;
    double _animationStep;
    MMTimer *_animationTimer;
}

- (void).cxx_destruct;
@property(nonatomic) double animationStep; // @synthesize animationStep=_animationStep;
@property(retain, nonatomic) MMTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(retain, nonatomic) UIImage *borderImage; // @synthesize borderImage=_borderImage;
@property(retain, nonatomic) UIImageView *borderImageView; // @synthesize borderImageView=_borderImageView;
@property(nonatomic) _Bool clockwise; // @synthesize clockwise=_clockwise;
@property(nonatomic) double current; // @synthesize current=_current;
- (double)currentStepMaxValue;
- (double)currentValue;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) double edgeRatio; // @synthesize edgeRatio=_edgeRatio;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void)incrementBy:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double innerPadding; // @synthesize innerPadding=_innerPadding;
@property(nonatomic) double max; // @synthesize max=_max;
- (double)maxValue;
@property(nonatomic) double min; // @synthesize min=_min;
- (_Bool)orientation;
- (double)previousStepMaxValue;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(retain, nonatomic) UIImage *progressImage; // @synthesize progressImage=_progressImage;
- (void)setCurrentValue:(double)arg1;
- (void)setIncrementalSteps:(id)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setOrientation:(_Bool)arg1;
@property(retain, nonatomic) NSArray *steps; // @synthesize steps=_steps;
- (void)startAnimationWithDuration:(double)arg1;
- (void)stopAnimation;
- (void)updateAnimation;

@end
