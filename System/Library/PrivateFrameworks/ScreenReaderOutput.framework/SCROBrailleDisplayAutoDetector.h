/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:38 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSMutableDictionary;

@interface SCROBrailleDisplayAutoDetector : NSObject {

	BOOL _isDetectingDisplays;
	IONotificationPortRef _notificationPort;
	NSMutableDictionary* _iteratorDict;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)sharedDetector;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isAutoDetectEnabled;
-(void)detectDisplays;
-(void)stopDetectingDisplays;
@end

