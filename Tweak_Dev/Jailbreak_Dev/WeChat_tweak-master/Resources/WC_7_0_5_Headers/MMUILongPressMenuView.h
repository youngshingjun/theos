//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUILongPressView.h"

@interface MMUILongPressMenuView : MMUILongPressView
{
    id <LongPressMenuViewDelegate> menu_delegate;
}

- (void).cxx_destruct;
- (void)LongPressEvents;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <LongPressMenuViewDelegate> menu_delegate; // @synthesize menu_delegate;

@end
