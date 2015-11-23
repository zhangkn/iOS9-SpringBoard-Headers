/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetDownloadSessionInternal, NSError, NSURL, NSArray, AVMediaSelection;

@interface AVAssetDownloadSession : NSObject {

	AVAssetDownloadSessionInternal* _internal;

}

@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSURL * destinationURL; 
@property (nonatomic,readonly) long long priority; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@property (nonatomic,readonly) unsigned long long availableFileSize; 
@property (nonatomic,readonly) unsigned long long downloadToken; 
@property (nonatomic,readonly) NSArray * loadedTimeRanges; 
@property (nonatomic,readonly) AVMediaSelection * resolvedMediaSelection; 
+(id)assetDownloadSessionWithDownloadToken:(unsigned long long)arg1 ;
+(id)assetDownloadSessionWithAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
+(id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(OpaqueFigAssetRef)_figAsset;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)_weakReference;
-(id)_errorForFigNotificationPayload:(CFDictionaryRef)arg1 key:(CFStringRef)arg2 ;
-(BOOL)_setFileFigAsset:(OpaqueFigAssetRef)arg1 ;
-(void)_transitionToTerminalStatus:(long long)arg1 error:(id)arg2 ;
-(void)_selectMediaOptionsFromMediaSelection:(id)arg1 ;
-(void)_addFigAssetListeners;
-(void)_addFigAssetDownloaderListeners;
-(void)_removeFigAssetListeners;
-(void)_removeFigPlaybackItemListeners;
-(void)_removeFigAssetDownloaderListeners;
-(id)_verifyDownloadConfigurationForAssetType;
-(int)_primeCache;
-(int)_readyForInspection;
-(id)_loadedTimeRangesFromFigLoadedTimeRanges:(id)arg1 ;
-(void)_addFigPlaybackItemListeners;
-(id)_figAssetNotificationNames;
-(id)_figPlaybackItemNotificationNames;
-(id)_figAssetDownloaderNotificationNames;
-(void)_primeCacheOnDispatchQueue;
-(void)_forwardLoadedTimeRangesChangedNotification:(id)arg1 ;
-(id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)initWithDownloadToken:(unsigned long long)arg1 ;
-(id)initWithAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(AVMediaSelection *)resolvedMediaSelection;
-(NSArray *)loadedTimeRanges;
-(unsigned long long)downloadToken;
-(NSURL *)destinationURL;
-(unsigned long long)availableFileSize;
-(NSError *)error;
-(void)dealloc;
-(id)init;
-(void)stop;
-(long long)priority;
-(void)start;
-(NSURL *)URL;
-(void)pause;
-(long long)status;
-(unsigned long long)fileSize;
-(void)finalize;
@end
