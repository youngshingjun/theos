//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@class GetMCreditLineTokenSignReq;

@interface HoneyPayGetMCreditLineTokenCgi : WCPayBaseCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (id)init;
- (void)startRequest;

// Remaining properties
@property(nonatomic) __weak id <HoneyPayGetMCreditLineTokenCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) GetMCreditLineTokenSignReq *request; // @dynamic request;

@end
