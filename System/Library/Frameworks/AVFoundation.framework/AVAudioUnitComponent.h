/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSString, NSURL, NSArray, NSDictionary;

@interface AVAudioUnitComponent : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * typeName; 
@property (nonatomic,readonly) NSString * localizedTypeName; 
@property (nonatomic,readonly) NSString * manufacturerName; 
@property (nonatomic,readonly) unsigned long long version; 
@property (nonatomic,readonly) NSString * versionString; 
@property (nonatomic,readonly) NSURL * componentURL; 
@property (nonatomic,readonly) NSArray * availableArchitectures; 
@property (getter=isSandboxSafe,nonatomic,readonly) BOOL sandboxSafe; 
@property (nonatomic,readonly) BOOL hasMIDIInput; 
@property (nonatomic,readonly) BOOL hasMIDIOutput; 
@property (nonatomic,readonly) OpaqueAudioComponentRef audioComponent; 
@property (copy) NSArray * userTagNames; 
@property (nonatomic,readonly) NSArray * allTagNames; 
@property (nonatomic,readonly) AudioComponentDescription audioComponentDescription; 
@property (nonatomic,readonly) NSURL * iconURL; 
@property (nonatomic,readonly) BOOL passesAUVal; 
@property (nonatomic,readonly) BOOL hasCustomView; 
@property (nonatomic,readonly) NSDictionary * configurationDictionary; 
-(id)GetTypeName:(unsigned)arg1 ;
-(AudioComponentDescription)audioComponentDescription;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 ;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 withAVAUManagerImpl:(AVAudioUnitComponentManagerImpl*)arg2 ;
-(void)localeChanged;
-(OpaqueAudioComponentRef)audioComponent;
-(NSString *)localizedTypeName;
-(NSArray *)userTagNames;
-(void)setUserTagNames:(NSArray *)arg1 ;
-(NSArray *)allTagNames;
-(NSURL *)componentURL;
-(NSArray *)availableArchitectures;
-(BOOL)hasCustomView;
-(BOOL)passesAUVal;
-(BOOL)isSandboxSafe;
-(BOOL)hasMIDIInput;
-(BOOL)hasMIDIOutput;
-(BOOL)supportsNumberInputChannels:(long long)arg1 outputChannels:(long long)arg2 ;
-(BOOL)isComponentDescriptionMatch:(AudioComponentDescription)arg1 ;
-(NSString *)name;
-(unsigned long long)version;
-(NSString *)manufacturerName;
-(NSString *)typeName;
-(NSString *)versionString;
-(NSDictionary *)configurationDictionary;
-(NSURL *)iconURL;
@end

