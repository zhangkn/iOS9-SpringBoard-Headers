/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface TRConnectionManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMapTable* _serviceToConnection;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)_XPCClientConnectionDidInterruptNotification:(id)arg1 ;
-(void)connectToService:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)TRXPCC_connectionWithUniqueIdentifierDidClose:(int)arg1 ;
-(void)TRXPCC_connectionWithUniqueIdentifier:(int)arg1 didReceivePacketEvent:(id)arg2 ;
-(id)_existingConnectionForService:(id)arg1 ;
-(id)_existingConnectionForConnectionUniqueIdentifier:(int)arg1 ;
-(void)_connectionDidCloseNotification:(id)arg1 ;
@end

