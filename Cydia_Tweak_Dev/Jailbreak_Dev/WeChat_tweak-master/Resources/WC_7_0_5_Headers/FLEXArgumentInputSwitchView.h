//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLEXArgumentInputView.h"

@class UISwitch;

@interface FLEXArgumentInputSwitchView : FLEXArgumentInputView
{
    UISwitch *_inputSwitch;
}

+ (_Bool)supportsObjCType:(const char *)arg1 withCurrentValue:(id)arg2;
- (void).cxx_destruct;
- (id)initWithArgumentTypeEncoding:(const char *)arg1;
@property(retain, nonatomic) UISwitch *inputSwitch; // @synthesize inputSwitch=_inputSwitch;
- (id)inputValue;
- (void)layoutSubviews;
- (void)setInputValue:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)switchValueDidChange:(id)arg1;

@end
