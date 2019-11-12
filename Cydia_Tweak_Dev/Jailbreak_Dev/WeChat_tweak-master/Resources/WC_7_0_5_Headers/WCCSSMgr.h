//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class MMRuleSetList, NSHashTable, NSMutableDictionary, NSString, WCCSSStyleExecuter;

@interface WCCSSMgr : MMService <MMService>
{
    NSMutableDictionary *_dicCssClass;
    WCCSSStyleExecuter *_styleExecuter;
    MMRuleSetList *_ruleSetList;
    NSHashTable *_hashTable;
}

- (void).cxx_destruct;
- (void)addHotReloaderTarger:(id)arg1;
- (void)applyRules:(id)arg1 ToTarget:(id)arg2;
- (void)dealloc;
@property(retain, nonatomic) NSMutableDictionary *dicCssClass; // @synthesize dicCssClass=_dicCssClass;
- (id)getStylesDicWithClass:(id)arg1;
- (id)getStylesWithClass:(id)arg1;
@property(retain, nonatomic) NSHashTable *hashTable; // @synthesize hashTable=_hashTable;
- (void)onFileChange:(id)arg1;
- (void)onServiceInit;
- (void)parseNewStyleCss;
- (void)reloadAllViewCssStyle;
@property(retain, nonatomic) MMRuleSetList *ruleSetList; // @synthesize ruleSetList=_ruleSetList;
@property(retain, nonatomic) WCCSSStyleExecuter *styleExecuter; // @synthesize styleExecuter=_styleExecuter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
