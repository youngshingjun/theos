//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayCheckAuthorityRequestStruct : NSObject
{
    NSString *appId;
    NSString *nonceStr;
    NSString *timestamp;
    NSString *package;
    NSString *paySign;
    NSString *signType;
    NSString *stepInURL;
    int m_enWCPayCheckAuthorityScene;
    int m_enWCPayCheckOpenWCPayViewAuthorityScene;
    int _JsApiSource;
    unsigned int _payChannel;
    NSString *_weAppUsername;
    NSString *_weAppPath;
    NSString *_commandWord;
}

- (void).cxx_destruct;
@property(nonatomic) int JsApiSource; // @synthesize JsApiSource=_JsApiSource;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) NSString *commandWord; // @synthesize commandWord=_commandWord;
- (void)dealloc;
@property(nonatomic) int m_enWCPayCheckAuthorityScene; // @synthesize m_enWCPayCheckAuthorityScene;
@property(nonatomic) int m_enWCPayCheckOpenWCPayViewAuthorityScene; // @synthesize m_enWCPayCheckOpenWCPayViewAuthorityScene;
@property(retain, nonatomic) NSString *nonceStr; // @synthesize nonceStr;
@property(retain, nonatomic) NSString *package; // @synthesize package;
@property(nonatomic) unsigned int payChannel; // @synthesize payChannel=_payChannel;
@property(retain, nonatomic) NSString *paySign; // @synthesize paySign;
@property(retain, nonatomic) NSString *signType; // @synthesize signType;
@property(retain, nonatomic) NSString *stepInURL; // @synthesize stepInURL;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp;
@property(retain, nonatomic) NSString *weAppPath; // @synthesize weAppPath=_weAppPath;
@property(retain, nonatomic) NSString *weAppUsername; // @synthesize weAppUsername=_weAppUsername;

@end
