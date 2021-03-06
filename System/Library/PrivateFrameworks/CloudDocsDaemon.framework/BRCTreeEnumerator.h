/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:44 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class BRCLocalContainer, BRCAccountSession, BRCItemID, NSMutableIndexSet, NSObject;

@interface BRCTreeEnumerator : NSObject {

	BRCLocalContainer* _container;
	BRCAccountSession* _session;
	/*^block*/id _handler;
	BRCItemID* _parentID;
	unsigned long long _rowID;
	NSMutableIndexSet* _seen;
	NSMutableIndexSet* _toVisit;
	NSObject*<OS_dispatch_group> _group;
	/*^block*/id _whenDone;

}

@property (nonatomic,copy) id whenDone;              //@synthesize whenDone=_whenDone - In the implementation block
-(void)done;
-(id)initWithContainer:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)enumerateBelow:(id)arg1 group:(id)arg2 ;
-(void)_scheduleAsync;
-(void)_iterate:(unsigned long long)arg1 ;
-(void)_iterateWithoutParent:(unsigned long long)arg1 ;
-(void)_visitNewParent:(unsigned long long)arg1 ;
-(id)whenDone;
-(void)setWhenDone:(id)arg1 ;
@end

