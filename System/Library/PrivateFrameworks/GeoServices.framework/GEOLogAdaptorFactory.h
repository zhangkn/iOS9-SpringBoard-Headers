/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GEOLogAdaptorFactory : NSObject {

	NSMutableDictionary* _logAdaptors;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)_createLogAdaptorWithOptions:(id)arg1 ;
-(id)logAdaptorWithOptions:(id)arg1 ;
@end

