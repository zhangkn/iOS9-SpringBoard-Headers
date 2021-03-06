/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CryptoTokenKit/TKSmartCardUserInteraction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TKSmartCardSlot;

@interface TKSmartCardUserInteractionForStringEntry : TKSmartCardUserInteraction <NSSecureCoding> {

	NSString* _result;
	TKSmartCardSlot* _slot;

}

@property (retain) NSString * result;                   //@synthesize result=_result - In the implementation block
@property (__weak) TKSmartCardSlot * slot;              //@synthesize slot=_slot - In the implementation block
+(BOOL)supportsSecureCoding;
-(TKSmartCardSlot *)slot;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)result;
-(void)runWithReply:(/*^block*/id)arg1 ;
-(void)setSlot:(TKSmartCardSlot *)arg1 ;
-(void)setResult:(NSString *)arg1 ;
@end

