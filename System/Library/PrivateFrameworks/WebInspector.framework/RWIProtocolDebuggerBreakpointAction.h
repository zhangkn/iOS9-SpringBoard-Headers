/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDebuggerBreakpointAction : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * data; 
@property (assign,nonatomic) int identifier; 
-(int)identifier;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)data;
-(void)setData:(NSString *)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(void)setIdentifier:(int)arg1 ;
@end
