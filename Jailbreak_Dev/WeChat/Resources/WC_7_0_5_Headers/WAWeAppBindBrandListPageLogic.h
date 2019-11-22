//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSMutableArray, NSMutableSet, NSString;

@interface WAWeAppBindBrandListPageLogic : MMObject <PBMessageObserverDelegate>
{
    _Bool _hasNoMore;
    unsigned int _currentPageNum;
    NSMutableArray *_bindItems;
    id <WAWeAppBindBrandListPageLogicDelegate> _delegate;
    NSString *_appid;
    NSString *_previousPageBuffer;
    NSMutableSet *_usernameSet;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSMutableArray *bindItems; // @synthesize bindItems=_bindItems;
@property(readonly, nonatomic) unsigned int currentPageNum; // @synthesize currentPageNum=_currentPageNum;
- (void)dealloc;
@property(nonatomic) __weak id <WAWeAppBindBrandListPageLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchNextPageItems;
- (id)getBindItemsFromBindBizInfo:(id)arg1;
@property(readonly, nonatomic) _Bool hasNoMore; // @synthesize hasNoMore=_hasNoMore;
- (id)initWithFirstPageBrandList:(id)arg1 appid:(id)arg2;
@property(copy, nonatomic) NSString *previousPageBuffer; // @synthesize previousPageBuffer=_previousPageBuffer;
- (void)recordUsernameInBrandList:(id)arg1;
@property(retain, nonatomic) NSMutableSet *usernameSet; // @synthesize usernameSet=_usernameSet;
- (id)trimBrandList:(id)arg1;

@end
