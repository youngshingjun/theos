//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MyFavoritesDB;

@interface FavoritesSearchDB : NSObject
{
    MyFavoritesDB *_mmDB;
}

- (void).cxx_destruct;
- (_Bool)deleteSearchItemByLocalFavId:(unsigned int)arg1;
- (_Bool)getSearchItemList:(id)arg1 byType:(int)arg2 SearchContent:(id)arg3;
- (_Bool)getSearchItemList:(id)arg1 byType:(int)arg2 SearchContent:(id)arg3 tags:(id)arg4;
- (id)init;
- (void)initDB:(id)arg1;
- (_Bool)insertOrUpdateSearchItem:(id)arg1;

@end
