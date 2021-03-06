/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString;

@interface _UIDatePickerComponent : NSObject {

	unsigned long long _equivalentUnit;
	NSString* _formatString;
	unsigned long long _calendarUnit;
	double _width;
	NSRange _unitRange;

}

@property (nonatomic,readonly) NSString * formatString;                        //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,readonly) unsigned long long calendarUnit;                //@synthesize calendarUnit=_calendarUnit - In the implementation block
@property (nonatomic,readonly) unsigned long long equivalentUnit; 
@property (assign,nonatomic) NSRange unitRange;                                //@synthesize unitRange=_unitRange - In the implementation block
@property (assign,nonatomic) double width;                                     //@synthesize width=_width - In the implementation block
+(id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 ;
+(id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 desiredUnits:(long long)arg3 ;
-(id)description;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(unsigned long long)calendarUnit;
-(NSString *)formatString;
-(unsigned long long)equivalentUnit;
-(void)setUnitRange:(NSRange)arg1 ;
-(NSRange)unitRange;
-(id)_initWithFormatString:(id)arg1 calendarUnit:(unsigned long long)arg2 ;
@end

