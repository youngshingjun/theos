//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class MMRedHeadLiner, MMWebImageView;

@interface EmoticonStoreDetailCoverImageView : MMUIView
{
    MMRedHeadLiner *m_tagImageView;
    MMWebImageView *m_webImageView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) MMRedHeadLiner *m_tagImageView; // @synthesize m_tagImageView;
@property(retain, nonatomic) MMWebImageView *m_webImageView; // @synthesize m_webImageView;
- (void)setImageUrl:(id)arg1;
- (void)setTagHidden:(_Bool)arg1;

@end
