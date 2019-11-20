//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IFriendListMgrExt.h"
#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface AddressBookFriendMgr : MMService <MMService, IFriendListMgrExt>
{
    NSMutableDictionary *m_friends;
}

- (void).cxx_destruct;
- (void)LoadData;
- (void)dealloc;
- (id)getAddressBookFriends;
- (id)init;
- (void)onFriendListUpdated:(id)arg1 ErrorCode:(unsigned int)arg2 Message:(id)arg3;
- (_Bool)trySyncAddressBookFriends;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
