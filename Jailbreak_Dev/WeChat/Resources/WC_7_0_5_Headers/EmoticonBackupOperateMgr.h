//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "EmoticonOperateCgiDelegate.h"
#import "EmoticonUploadCgiDelegate.h"
#import "MMService.h"

@class AddEmoticonWrap, EmoticonCameraReportObject, EmoticonOperateCgi, EmoticonUploadCgi, NSString, OrderedDictionary;

@interface EmoticonBackupOperateMgr : MMService <EmoticonOperateCgiDelegate, EmoticonUploadCgiDelegate, MMService>
{
    _Bool m_hasAddBackupSuccessAfterInit;
    _Bool m_isLastSuccessAddEmoticonCustom;
    EmoticonOperateCgi *_m_operateCgi;
    EmoticonUploadCgi *_m_uploadCgi;
    AddEmoticonWrap *_m_addEmoticonWrap;
    OrderedDictionary *_m_uploadEmoticonQueue;
    EmoticonCameraReportObject *_m_reportObject;
}

+ (void)reportAddBackupEmoticon:(id)arg1 failedWithReason:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)addBackupEmoticon:(id)arg1 failedWithReason:(unsigned long long)arg2;
- (void)addBackupEmoticonOkWithAddEmoticonWrap:(id)arg1;
- (void)addBackupEmoticonOperateOk:(id)arg1 withNeedBackupArray:(id)arg2;
- (void)addBackupEmoticonToServer:(id)arg1;
- (id)addEmoticonWrapForUploadMd5:(id)arg1;
- (id)allAddEmoticonWrapInUploadQueue;
- (void)checkUploadEmoticon;
- (unsigned long long)countOfAddEmoticonWrapsPendingUpload;
- (void)dealloc;
- (id)decodeEmoticonUploadQueueFromFile:(id)arg1;
- (void)deleteBackupEmoticonFromServer:(id)arg1 withType:(unsigned long long)arg2;
- (void)deleteBackupEmoticonOperateFailed:(id)arg1;
- (void)deleteBackupEmoticonOperateOk:(id)arg1 withType:(unsigned long long)arg2;
- (_Bool)encodeEmoticonUploadQueue:(id)arg1 toFile:(id)arg2;
@property(readonly, nonatomic) _Bool hasAddBackupSuccessAfterInit; // @synthesize hasAddBackupSuccessAfterInit=m_hasAddBackupSuccessAfterInit;
- (id)init;
@property(readonly, nonatomic) _Bool isLastSuccessAddEmoticonCustom; // @synthesize isLastSuccessAddEmoticonCustom=m_isLastSuccessAddEmoticonCustom;
@property(retain, nonatomic) AddEmoticonWrap *m_addEmoticonWrap; // @synthesize m_addEmoticonWrap=_m_addEmoticonWrap;
@property(retain, nonatomic) EmoticonOperateCgi *m_operateCgi; // @synthesize m_operateCgi=_m_operateCgi;
@property(retain, nonatomic) EmoticonCameraReportObject *m_reportObject; // @synthesize m_reportObject=_m_reportObject;
@property(retain, nonatomic) EmoticonUploadCgi *m_uploadCgi; // @synthesize m_uploadCgi=_m_uploadCgi;
@property(retain, nonatomic) OrderedDictionary *m_uploadEmoticonQueue; // @synthesize m_uploadEmoticonQueue=_m_uploadEmoticonQueue;
- (void)onEmoticonOperateFailed:(id)arg1 opCode:(unsigned long long)arg2 isOverLimit:(_Bool)arg3;
- (void)onEmoticonOperateOk:(id)arg1 WithNeedBackupArray:(id)arg2 opCode:(unsigned long long)arg3 type:(unsigned long long)arg4;
- (void)onEmoticonUploadMd5Failed:(id)arg1 reason:(unsigned long long)arg2;
- (void)onEmoticonUploadMd5Ok:(id)arg1 emojiInfo:(id)arg2;
- (_Bool)removeAddEmoticonWrapFromUploadQueueForUploadMd5:(id)arg1;
- (void)stickyBackupEmoticonOperateFailed:(id)arg1;
- (void)stickyBackupEmoticonOperateOk:(id)arg1 withType:(unsigned long long)arg2;
- (void)stickyBackupEmoticonToServer:(id)arg1 withType:(unsigned long long)arg2;
- (void)trySaveThumbImageForAddEmoticonWrap:(id)arg1;
- (void)uploadEmoticon;
- (void)uploadEmoticonFailed:(id)arg1 withReason:(unsigned long long)arg2;
- (void)uploadEmoticonOk:(id)arg1 withEmojiInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
