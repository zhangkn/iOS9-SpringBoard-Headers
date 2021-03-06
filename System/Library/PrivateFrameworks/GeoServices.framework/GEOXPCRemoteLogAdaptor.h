/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOBaseLogAdaptor.h>
#import <libobjc.A.dylib/PBRequesterDelegate.h>

@protocol OS_dispatch_queue;
@class NSURL, NSString, NSLock, GEOLogMessageCacheManager, GEORequester, NSObject;

@interface GEOXPCRemoteLogAdaptor : GEOBaseLogAdaptor <PBRequesterDelegate> {

	NSURL* _remoteURL;
	NSString* _debugRequestName;
	NSLock* _xpcActivityInfoLock;
	NSString* _logMessageCacheFilePath;
	GEOLogMessageCacheManager* _logMessageCacheManager;
	GEORequester* _logMessageCollectionRequester;
	NSLock* _logMessageCollectionRequesterLock;
	NSObject*<OS_dispatch_queue> _logMessageSendQueue;

}

@property (nonatomic,retain) NSURL * remoteURL;                              //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,retain) NSString * debugRequestName;                    //@synthesize debugRequestName=_debugRequestName - In the implementation block
@property (assign,nonatomic) long long xpcActivityTriggerCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)_deviceLocking;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(NSString *)debugRequestName;
-(void)setDebugRequestName:(NSString *)arg1 ;
-(long long)_sizeOfLogMessageRequest:(id)arg1 ;
-(void)setXpcActivityTriggerCount:(long long)arg1 ;
-(BOOL)_isLogMessageCollectionRequesterPending;
-(void)_deviceUnlocked;
-(void)_requesterDidCompleteHandler:(id)arg1 ;
-(void)_cleanupLogMessageCollectionRequester;
-(void)incrementXpcActivityTriggerCount;
-(void)_unregisterXPCActivityTimer;
-(void)flushLogs;
-(void)_initializeAdaptor;
-(void)_purgeExpiredLogMessagesFromCache;
-(NSURL *)remoteURL;
-(void)queueLogMessage:(id)arg1 ;
-(void)_beginSendingLogMessageChunks;
-(long long)xpcActivityTriggerCount;
-(void)_sendNextLogMessageChunk;
-(void)_registerXPCActivityTimer;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(void)_sendLogMessageRequest:(id)arg1 ;
-(void)_purgeAndSendLogMessages;
-(void)_queueNextLogMessagesChunkForSending;
-(id)initWithRemoteURL:(id)arg1 debugRequestName:(id)arg2 supportedTypes:(id)arg3 supportedSubTypes:(id)arg4 ;
@end

