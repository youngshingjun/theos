//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportVideoActionItem : WAReportBaseItem
{
    unsigned int _isFullScreen;
    unsigned int _eventId;
    unsigned int _clientTimestamp;
    unsigned int _publiclibversion;
    NSString *_eventNote;
    NSString *_videoTitle;
    NSString *_videoUrl;
    NSString *_eventNote1;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int clientTimestamp; // @synthesize clientTimestamp=_clientTimestamp;
@property(nonatomic) unsigned int eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSString *eventNote; // @synthesize eventNote=_eventNote;
@property(retain, nonatomic) NSString *eventNote1; // @synthesize eventNote1=_eventNote1;
@property(nonatomic) unsigned int isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) unsigned int publiclibversion; // @synthesize publiclibversion=_publiclibversion;
- (int)reportID;
- (id)reportString;
@property(retain, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;

@end
