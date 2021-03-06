/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AFAnalyticsService;
@class NSObject;

@interface AFAnalytics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<AFAnalyticsService> _service;

}
+(id)sharedAnalytics;
-(id)init;
-(void)_stageEvent:(id)arg1 ;
-(void)_stageEvents:(id)arg1 ;
-(void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 contextNoCopy:(BOOL)arg4 ;
-(void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextProvider:(/*^block*/id)arg3 contextProvidingQueue:(id)arg4 ;
-(id)_service:(BOOL)arg1 ;
-(void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(BOOL)arg3 ;
-(void)logEventWithType:(long long)arg1 contextProvider:(/*^block*/id)arg2 ;
-(void)logEventWithType:(long long)arg1 contextProvider:(/*^block*/id)arg2 contextProvidingQueue:(id)arg3 ;
-(void)logEvent:(id)arg1 ;
-(void)logEvents:(id)arg1 ;
-(void)logEventWithType:(long long)arg1 context:(id)arg2 ;
-(void)setService:(id)arg1 ;
@end

