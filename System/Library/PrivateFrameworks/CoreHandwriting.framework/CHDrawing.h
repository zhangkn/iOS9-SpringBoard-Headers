/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CHDrawing : NSObject <NSCopying> {

	CJKChar* _drawing;

}

@property (assign,nonatomic) CJKChar drawing;              //@synthesize drawing=_drawing - In the implementation block
-(CGRect)bounds;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(void)setLineHeight:(double)arg1 ;
-(void)addPoint:(CGPoint)arg1 ;
-(void)clear;
-(void)endStroke;
-(id)xyRepresentation;
-(unsigned long long)pointCountForStrokeIndex:(unsigned long long)arg1 ;
-(CGPoint)pointForStrokeIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2 ;
-(BOOL)isPrefixForDrawing:(id)arg1 ;
-(NSRange)matchingStrokePrefixRangeForDrawing:(id)arg1 ;
-(Matrix<float>*)bitmapRepresentationForSize:(CGSize)arg1 ;
-(Matrix<float>*)bitmapRepresentationForSize:(CGSize)arg1 drawingAlgorithm:(int)arg2 ;
-(Matrix<float>*)orientationRepresentationForSampling:(unsigned long long)arg1 convolutionWidth:(unsigned long long)arg2 ;
-(id)sortedDrawing;
-(vector<unsigned long, std::__1::allocator<unsigned long> >*)strokeIndicesSortedByMinXCoordinate;
-(CJKChar)drawing;
-(void)setDrawing:(CJKChar)arg1 ;
-(unsigned long long)pointCount;
-(unsigned long long)strokeCount;
@end

