//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

#import "WAMultiPickerViewDelegate.h"

@class NSString, WAMultiPickerView;

@interface WAWebViewPlugin_multiPicker : WAWebViewPluginBase <WAMultiPickerViewDelegate>
{
    WAMultiPickerView *_pickerView;
    id <IWAWebViewPluginDelegate> _resultDelegate;
}

- (void).cxx_destruct;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)onCancel;
- (void)onConfirm:(id)arg1;
- (void)onSelect:(long long)arg1 row:(long long)arg2;
@property(nonatomic) __weak id <IWAWebViewPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void)showMultiPickerView:(id)arg1 current:(id)arg2;
- (void)updateMultiPickerView:(id)arg1 current:(long long)arg2 column:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
