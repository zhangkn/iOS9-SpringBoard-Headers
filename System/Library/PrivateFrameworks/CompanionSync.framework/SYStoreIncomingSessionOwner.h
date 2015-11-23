/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <CompanionSync/SYStoreSessionOwner.h>

@interface SYStoreIncomingSessionOwner : SYStoreSessionOwner
-(void)syncSession:(id)arg1 applyChanges:(NSArray*)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithIncomingSession:(id)arg1 ;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2 ;
-(BOOL)isResetSync;
@end
