/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSAttributedString, ASAsset;

@interface _UIDefinitionValue : NSObject {

	NSString* _localizedDictionaryName;
	NSString* _term;
	NSAttributedString* _definition;
	NSString* _longDefinition;
	ASAsset* _rawAsset;

}

@property (readonly) NSString * localizedDictionaryName;              //@synthesize localizedDictionaryName=_localizedDictionaryName - In the implementation block
@property (readonly) NSString * term;                                 //@synthesize term=_term - In the implementation block
@property (readonly) NSAttributedString * definition;                 //@synthesize definition=_definition - In the implementation block
@property (readonly) NSString * longDefinition;                       //@synthesize longDefinition=_longDefinition - In the implementation block
@property (nonatomic,retain) ASAsset * rawAsset;                      //@synthesize rawAsset=_rawAsset - In the implementation block
-(id)description;
-(id)initWithLocalizedDictionaryName:(id)arg1 term:(id)arg2 definition:(id)arg3 longDefinition:(id)arg4 ;
-(NSString *)localizedDictionaryName;
-(NSString *)term;
-(NSAttributedString *)definition;
-(NSString *)longDefinition;
-(ASAsset *)rawAsset;
-(void)setRawAsset:(ASAsset *)arg1 ;
@end

