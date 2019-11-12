//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QGlobaleDefines : NSObject
{
    _Bool _worldmapPrevilege;
    NSString *_documentRootPath;
    NSString *_cacheRootPath;
    NSString *_dataEngineVersion;
}

+ (long long)clientType;
+ (id)singleton;
- (void).cxx_destruct;
- (id)DPI;
- (id)appIdentifier;
- (id)appName;
- (id)appVersion;
- (id)appendCommonUrlStatisticParamatersFor:(id)arg1;
@property(readonly, copy, nonatomic) NSString *cacheRootPath; // @synthesize cacheRootPath=_cacheRootPath;
- (id)constructCommonArguments;
- (id)constructURLStringWithArguments:(id)arg1 forUrl:(id)arg2;
@property(copy, nonatomic) NSString *dataEngineVersion; // @synthesize dataEngineVersion=_dataEngineVersion;
- (id)deviceType;
@property(readonly, copy, nonatomic) NSString *documentRootPath; // @synthesize documentRootPath=_documentRootPath;
- (id)handDrawMapVersion;
- (id)imageNamed:(id)arg1;
- (id)imei;
- (id)init;
- (id)netType;
- (id)percentString:(id)arg1;
- (void)saveSDKVersion;
- (id)sdkVersion;
@property(nonatomic) _Bool worldmapPrevilege; // @synthesize worldmapPrevilege=_worldmapPrevilege;
- (_Bool)shouldClearAllLocalConfigFiles;
- (void)updateHandDrawMapVersion:(id)arg1;
- (void)updateWorldMapVersionInfo:(id)arg1;
- (id)worldMapVersionInfo;

@end
