//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray;

@interface WCAdFeedbackInfo : NSObject <NSCoding>
{
    NSArray *_feedbackList;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSArray *feedbackList; // @synthesize feedbackList=_feedbackList;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)validFeedbackCnt;
- (id)validFeedbackList;

@end
