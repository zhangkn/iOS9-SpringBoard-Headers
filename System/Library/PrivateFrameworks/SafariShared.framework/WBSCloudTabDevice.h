/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDate, NSDictionary;

@interface WBSCloudTabDevice : NSObject <NSCopying> {

	BOOL _closeRequestSupported;
	BOOL _hasDuplicateName;
	NSString* _name;
	NSString* _uuid;
	NSArray* _tabs;
	NSDate* _lastModified;

}

@property (nonatomic,copy,readonly) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (getter=isCloseRequestSupported,nonatomic,readonly) BOOL closeRequestSupported;              //@synthesize closeRequestSupported=_closeRequestSupported - In the implementation block
@property (nonatomic,readonly) BOOL hasDuplicateName;                                                  //@synthesize hasDuplicateName=_hasDuplicateName - In the implementation block
@property (nonatomic,copy,readonly) NSString * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tabs;                                                    //@synthesize tabs=_tabs - In the implementation block
@property (nonatomic,readonly) NSDate * lastModified;                                                  //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)_dictionaryWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(BOOL)arg3 tabs:(id)arg4 ;
+(BOOL)isCloudTabDeviceDictionary:(id)arg1 ;
+(unsigned long long)tabCountInDictionary:(id)arg1 ;
+(id)deviceNameInDictionary:(id)arg1 ;
+(id)lastModifiedDateInDictionary:(id)arg1 ;
+(BOOL)hasDuplicateDeviceNameInDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)uuid;
-(NSDate *)lastModified;
-(id)initWithDictionary:(id)arg1 uuid:(id)arg2 ;
-(id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(BOOL)arg3 tabs:(id)arg4 uuid:(id)arg5 ;
-(id)deviceByRemovingTab:(id)arg1 ;
-(id)deviceByRemovingTabs:(id)arg1 ;
-(BOOL)isCloseRequestSupported;
-(BOOL)hasDuplicateName;
-(NSArray *)tabs;
@end

