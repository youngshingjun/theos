//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CEmoticonWrap, CMessageWrap, NSString;

@protocol BaseEmoticonViewDelegate <NSObject>

@optional
- (void)deleteEmoticon;
- (void)didSelectorEmoticon:(NSString *)arg1;
- (void)didSelectorSelfDefinedEmotcion:(CEmoticonWrap *)arg1;
- (void)sendNotGameEmoticonMessage:(CMessageWrap *)arg1 errorMsg:(NSString *)arg2;
@end
