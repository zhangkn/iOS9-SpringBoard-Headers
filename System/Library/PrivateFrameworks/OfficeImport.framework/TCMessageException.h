/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSException.h>

@class TCMessageEntry;

@interface TCMessageException : NSException {

	TCMessageEntry* m_entry;

}
+(void)initialize;
+(id)exceptionWithMessage:(TCTaggedMessageStructure*)arg1 ;
+(id)exceptionWithUntaggedMessage:(id)arg1 ;
+(void)raise:(TCTaggedMessageStructure*)arg1 ;
+(void)raiseUntaggedMessage:(id)arg1 ;
+(id)nsError:(id)arg1 domain:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)getEntry;
-(id)initWithMessage:(TCTaggedMessageStructure*)arg1 ;
-(id)initWithUntaggedMessage:(id)arg1 ;
@end

