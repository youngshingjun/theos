//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface EmoticonCustomReportData : MMObject
{
}

+ (void)ReportAutoStartSyncOfType:(unsigned long long)arg1;
+ (void)ReportConfirmStartSyncAtCellNetworkOfType:(unsigned long long)arg1;
+ (void)ReportCustomEmoticonCountWhenStartRecover:(unsigned long long)arg1 ofType:(unsigned long long)arg2;
+ (void)ReportCustomEmoticonManageIconClick;
+ (void)ReportCustomEmoticonStoreEntranceClick;
+ (void)ReportCustomEmoticonStoreTabClick;
+ (void)ReportCustomEmoticonTabClick;
+ (void)ReportEmoticonCustomManageAddClick;
+ (void)ReportEmoticonCustomManageEditClick;
+ (void)ReportEmoticonCustomManageEnterFromCell;
+ (void)ReportEmoticonCustomManageEnterFromOverLimitTips;
+ (void)ReportEmoticonFreeClick;
+ (void)ReportEmoticonNewClick;
+ (void)ReportEmoticonTabEntranceClick;
+ (void)ReportHasEmoticonToSyncOfType:(unsigned long long)arg1;
+ (void)ReportManualStartSyncAtCellNetworkOfType:(unsigned long long)arg1;
+ (void)ReportManualStopSyncOfType:(unsigned long long)arg1;
+ (id)ReportStringForEmoticonSyncOfAction:(unsigned long long)arg1 andType:(unsigned long long)arg2;

@end
