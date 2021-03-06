/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUItemContentRating, NSString, NSURL;

@interface SUNavigationMenuItem : NSObject <NSCopying> {

	SUItemContentRating* _contentRating;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,readonly) SUItemContentRating * contentRating;              //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                      //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(SUItemContentRating *)contentRating;
@end

