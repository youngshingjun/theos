//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface UpdateWxaUsageRecordRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int isFromBackground; // @dynamic isFromBackground;
@property(nonatomic) unsigned int opType; // @dynamic opType;
@property(nonatomic) unsigned int reason; // @dynamic reason;
@property(nonatomic) unsigned int recordType; // @dynamic recordType;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;

@end
