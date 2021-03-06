/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString, NSDictionary;

@interface AVMetadataMachineReadableCodeObjectInternal : NSObject {

	BOOL decoded;
	NSArray* corners;
	NSString* stringValue;
	NSDictionary* basicDescriptor;

}

@property (retain) NSArray * corners; 
@property (retain) NSString * stringValue; 
@property (retain) NSDictionary * basicDescriptor; 
@property (assign) BOOL decoded; 
-(NSDictionary *)basicDescriptor;
-(void)setBasicDescriptor:(NSDictionary *)arg1 ;
-(BOOL)decoded;
-(void)setDecoded:(BOOL)arg1 ;
-(void)dealloc;
-(NSArray *)corners;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setCorners:(NSArray *)arg1 ;
@end

