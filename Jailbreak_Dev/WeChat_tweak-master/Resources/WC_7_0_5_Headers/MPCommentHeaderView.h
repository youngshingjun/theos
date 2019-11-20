//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IContactMgrExt.h"

@class CContact, MMUIButton, MMUILabel;

@interface MPCommentHeaderView : UIView <IContactMgrExt>
{
    _Bool _isTempUrl;
    _Bool _funcEnable;
    _Bool _hasElectComment;
    _Bool _onlyFansCanComment;
    unsigned int _theme;
    CContact *_bizContact;
    double _topMargin;
    id <MPCommentHeaderViewDelegate> _delegate;
    MMUILabel *_electLabel;
    MMUIButton *_commentBtn;
    MMUILabel *_onlyFansCanCommentLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *bizContact; // @synthesize bizContact=_bizContact;
@property(retain, nonatomic) MMUIButton *commentBtn; // @synthesize commentBtn=_commentBtn;
- (void)dealloc;
@property(nonatomic) __weak id <MPCommentHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUILabel *electLabel; // @synthesize electLabel=_electLabel;
@property(nonatomic) _Bool funcEnable; // @synthesize funcEnable=_funcEnable;
@property(nonatomic) _Bool hasElectComment; // @synthesize hasElectComment=_hasElectComment;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isTempUrl; // @synthesize isTempUrl=_isTempUrl;
- (void)layoutSubviews;
- (void)onClicked;
- (void)onModifyContact:(id)arg1;
@property(nonatomic) _Bool onlyFansCanComment; // @synthesize onlyFansCanComment=_onlyFansCanComment;
@property(retain, nonatomic) MMUILabel *onlyFansCanCommentLabel; // @synthesize onlyFansCanCommentLabel=_onlyFansCanCommentLabel;
@property(nonatomic) unsigned int theme; // @synthesize theme=_theme;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
- (void)updateSubviews;

@end
