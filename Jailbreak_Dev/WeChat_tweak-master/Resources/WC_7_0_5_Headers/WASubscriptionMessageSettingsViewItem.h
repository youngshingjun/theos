//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray, NSString, SubscribeMsgItem;

@interface WASubscriptionMessageSettingsViewItem : MMObject
{
    _Bool _selected;
    int _templateType;
    NSString *_wording;
    NSString *_templateID;
    NSArray *_detailItems;
    SubscribeMsgItem *_originMsgItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *detailItems; // @synthesize detailItems=_detailItems;
- (void)fillWithMsgItem:(id)arg1;
- (id)generateDetailItems:(id)arg1;
- (id)initWith:(id)arg1;
- (_Bool)itemDataChanged;
@property(retain, nonatomic) SubscribeMsgItem *originMsgItem; // @synthesize originMsgItem=_originMsgItem;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
@property(nonatomic) int templateType; // @synthesize templateType=_templateType;
@property(copy, nonatomic) NSString *wording; // @synthesize wording=_wording;
- (id)toMsgItem;

@end
