/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class NSString;

@interface EKSuggestedEventInfo : EKObject

@property (assign,nonatomic) BOOL changesAcknowledged; 
@property (assign,nonatomic) unsigned long long changedFields; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,copy) NSString * opaqueKey; 
@property (nonatomic,copy) NSString * uniqueKey; 
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(NSString *)opaqueKey;
-(void)setChangesAcknowledged:(BOOL)arg1 ;
-(void)setOpaqueKey:(NSString *)arg1 ;
-(unsigned long long)changedFields;
-(BOOL)changesAcknowledged;
-(id)initWithEventStore:(id)arg1 opaqueKey:(id)arg2 uniqueKey:(id)arg3 ;
-(id)_persistentInfo;
-(id)relatedEvent;
-(void)setChangedFields:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copy;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setUniqueKey:(NSString *)arg1 ;
-(NSString *)uniqueKey;
@end

