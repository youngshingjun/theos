//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class JSEvent, NSString, UIViewController;

@protocol WebAddContactDelegate
- (void)OnWebAddContact:(int)arg1 Msg:(NSString *)arg2 CallBack:(JSEvent *)arg3;
- (void)OnWebAddContactReturn;
- (UIViewController *)currentViewController;
@end
