//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ShareConfirmViewDelegate.h"

@class FavoritesItem, NSData, NSDictionary, NSString, ShareConfirmView;

@interface ShareFavoritesConfirmLogicHelper : MMObject <ShareConfirmViewDelegate>
{
    ShareConfirmView *_confirmView;
    FavoritesItem *_favItem;
    id <ShareFavoritesConfirmLogicHelperDelegate> _delegate;
    NSString *_thumbImageUrl;
    _Bool _hasBeenHidden;
    NSDictionary *_userData;
    NSData *_thumbData;
    NSData *_fileData;
}

- (void).cxx_destruct;
- (void)OnBackToApp:(id)arg1;
- (void)OnCancel:(id)arg1;
- (void)OnError:(id)arg1;
- (void)OnSend:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <ShareFavoritesConfirmLogicHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
- (void)hideConfirmView;
- (id)initWithFavoritesItem:(id)arg1;
- (void)layoutSubviewToOrientation:(long long)arg1;
- (void)rotateToCurrentOrietation;
- (void)rotateToOrientaion:(long long)arg1;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData=_thumbData;
@property(retain, nonatomic) NSString *thumbImageUrl; // @synthesize thumbImageUrl=_thumbImageUrl;
@property(retain, nonatomic) NSDictionary *userData; // @synthesize userData=_userData;
- (void)showConfirmView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
