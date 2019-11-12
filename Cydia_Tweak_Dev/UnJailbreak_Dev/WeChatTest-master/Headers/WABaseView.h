//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATouchBaseView.h"

@class NSDictionary, NSString, UIColor, UILabel, UIView;
@protocol WABaseViewDelegate;

@interface WABaseView : WATouchBaseView
{
    UILabel *_label;
    UIView *_background;
    double _padding[4];
    double _alignOffset;
    _Bool _clickable;
    _Bool _bEventToWebView;
    _Bool _fixed;
    unsigned int _viewId;
    NSString *_userData;
    id <WABaseViewDelegate> _delegate;
    unsigned long long _type;
    NSDictionary *_style;
    UIColor *_backgroundColor;
}

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSDictionary *style; // @synthesize style=_style;
@property(nonatomic) _Bool fixed; // @synthesize fixed=_fixed;
@property(nonatomic) unsigned int viewId; // @synthesize viewId=_viewId;
@property(nonatomic) _Bool bEventToWebView; // @synthesize bEventToWebView=_bEventToWebView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <WABaseViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *userData; // @synthesize userData=_userData;
- (void).cxx_destruct;
- (_Bool)clickable;
- (void)onButtonClick:(id)arg1;
- (void)setBorderStyle:(id)arg1;
- (void)setBackground:(id)arg1 style:(id)arg2 clickable:(_Bool)arg3;
- (id)getBackgroundImage:(id)arg1;
- (void)setClickable:(_Bool)arg1;
- (void)updateBackgoundImage:(id)arg1;
- (void)layoutSubviews;
- (void)setLabel:(id)arg1;
- (id)description;

@end
