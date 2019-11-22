//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@interface ExptLogic : MMObject <PBMessageObserverDelegate>
{
    unsigned int _lastUpdateTime;
    unsigned int _interval;
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnReceNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)checkToGetSvrExpt;
- (void)dealloc;
- (unsigned int)getExptInterval;
- (unsigned int)getLastGetExptTime;
- (void)getSvrExpt:(unsigned int)arg1;
- (unsigned int)getTimeFromFile:(id)arg1;
- (id)init;
@property(nonatomic) unsigned int interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
- (id)mmExptPath:(id)arg1;
- (void)noteGetExptIntervalSec:(unsigned int)arg1;
- (void)noteGetExptTime:(unsigned int)arg1;
- (void)resetGetXExptTime:(unsigned int)arg1;
- (_Bool)saveTimeToFile:(unsigned int)arg1 fileName:(id)arg2;
- (void)writeGetExptTime:(unsigned int)arg1;

@end
