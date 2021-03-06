/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSAttributedString;

@interface _UILabelScaledMetrics : NSObject {

	double _actualScaleFactor;
	double _baselineOffset;
	double _scaledBaselineOffset;
	double _scaledLineHeight;
	NSAttributedString* _scaledAttributedText;
	CGSize _targetSize;
	CGSize _scaledSize;

}

@property (assign,nonatomic) CGSize targetSize;                                      //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) CGSize scaledSize;                                      //@synthesize scaledSize=_scaledSize - In the implementation block
@property (assign,nonatomic) double actualScaleFactor;                               //@synthesize actualScaleFactor=_actualScaleFactor - In the implementation block
@property (assign,nonatomic) double baselineOffset;                                  //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (assign,nonatomic) double scaledBaselineOffset;                            //@synthesize scaledBaselineOffset=_scaledBaselineOffset - In the implementation block
@property (assign,nonatomic) double scaledLineHeight;                                //@synthesize scaledLineHeight=_scaledLineHeight - In the implementation block
@property (nonatomic,retain) NSAttributedString * scaledAttributedText;              //@synthesize scaledAttributedText=_scaledAttributedText - In the implementation block
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
-(CGSize)scaledSize;
-(void)setScaledSize:(CGSize)arg1 ;
-(double)actualScaleFactor;
-(void)setActualScaleFactor:(double)arg1 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(double)scaledBaselineOffset;
-(void)setScaledBaselineOffset:(double)arg1 ;
-(double)scaledLineHeight;
-(void)setScaledLineHeight:(double)arg1 ;
-(NSAttributedString *)scaledAttributedText;
-(void)setScaledAttributedText:(NSAttributedString *)arg1 ;
@end

