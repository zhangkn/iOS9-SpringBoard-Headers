/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface NSDebugString : NSString {

	NSString* string;

}
-(void)dealloc;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(void)finalize;
@end
