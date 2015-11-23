/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BLTAbstractIDSDevice.h>

@class NSString;

@interface BLTTestIDSDevice : NSObject <BLTAbstractIDSDevice> {

	BOOL _isDefaultPairedDevice;
	BOOL _isNearby;
	BOOL _isConnected;

}

@property (assign,nonatomic) BOOL isDefaultPairedDevice;              //@synthesize isDefaultPairedDevice=_isDefaultPairedDevice - In the implementation block
@property (assign,nonatomic) BOOL isNearby;                           //@synthesize isNearby=_isNearby - In the implementation block
@property (assign,nonatomic) BOOL isConnected;                        //@synthesize isConnected=_isConnected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsDefaultPairedDevice:(BOOL)arg1 ;
-(void)setIsNearby:(BOOL)arg1 ;
-(void)setIsConnected:(BOOL)arg1 ;
-(BOOL)isConnected;
-(BOOL)isDefaultPairedDevice;
-(BOOL)isNearby;
@end
