//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMConfigMgrExt-Protocol.h"
#import "WCLazyInitObjectProtocol-Protocol.h"
#import "WCPayLogicMgrExt-Protocol.h"

@class NSMutableDictionary, NSString, RightTopMenuData, UIButton, UIImageView;

@interface NewMainFrameRightTopMenuBtn : MMUIView <MMConfigMgrExt, WCPayLogicMgrExt, WCLazyInitObjectProtocol>
{
    UIImageView *m_showNewView;
    RightTopMenuData *m_data;
    NSMutableDictionary *m_dicItems;
    UIButton *m_addButton;
    _Bool haveLazyInit;
}

@property(nonatomic) _Bool haveLazyInit; // @synthesize haveLazyInit;
- (void).cxx_destruct;
- (void)ReloadWallet;
- (void)OnGetReceiveOrPayReddotData;
- (void)onMMDynamicConfigUpdated;
- (void)reloadData;
- (void)reloadAllItems;
- (void)checkRedDot;
- (void)reloadMenuItems;
- (void)saveArchive;
- (void)showRightTopMenuBtn;
- (_Bool)isTopRightMenuShowID:(id)arg1;
- (void)hideRightTopMenuBtn;
- (void)onItemAction:(id)arg1;
- (void)dealloc;
- (void)goToLazyInitObject;
- (double)timeToLazyInitAfterOpenFirstView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
