//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"
#import "MMTipsViewControllerDelegate.h"

@class MMTipsViewController, NSMutableArray, NSString, RichTextView, UIButton, WCPayBindCardInfo;

@interface WCPayResetPwdBindedCardListViewController : WCPayBaseViewController <MMTipsViewControllerDelegate, ILinkEventExt>
{
    UIButton *m_footerButton;
    NSMutableArray *m_cellInfoArray;
    WCPayBindCardInfo *selectedPayCardInfo;
    id <WCPayResetPwdBindedCardListViewControllerDelegate> m_delegate;
    _Bool bSelectedNewCardToResetPwd;
    RichTextView *richTextView;
    _Bool bPoped;
    UIButton *_qaButton;
    MMTipsViewController *_errorTipsViewController;
}

- (void).cxx_destruct;
- (void)OnResetPwdBindedCardListBack;
- (void)OnSelectCard:(struct WCTableViewNormalCellManager *)arg1;
- (void)OnSelectInvalidCard:(struct WCTableViewNormalCellManager *)arg1;
- (void)OnSelectNewCard;
- (id)checkBankAvailable:(id)arg1;
- (_Bool)checkBankCanShow:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) MMTipsViewController *errorTipsViewController; // @synthesize errorTipsViewController=_errorTipsViewController;
- (id)init;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onNext;
- (void)onQAButtonClick;
@property(retain, nonatomic) UIButton *qaButton; // @synthesize qaButton=_qaButton;
- (void)reloadCardListView;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
