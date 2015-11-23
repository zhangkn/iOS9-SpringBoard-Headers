/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOUser;

@interface GEOReview : PBCodable <NSCopying> {

	double _reviewTime;
	double _score;
	NSString* _languageCode;
	GEOUser* _reviewer;
	NSString* _snippet;
	NSString* _uid;
	SCD_Struct_GE7 _has;

}

@property (nonatomic,readonly) BOOL hasSnippet; 
@property (nonatomic,retain) NSString * snippet;                   //@synthesize snippet=_snippet - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score;                         //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL hasReviewTime; 
@property (assign,nonatomic) double reviewTime;                    //@synthesize reviewTime=_reviewTime - In the implementation block
@property (nonatomic,readonly) BOOL hasReviewer; 
@property (nonatomic,retain) GEOUser * reviewer;                   //@synthesize reviewer=_reviewer - In the implementation block
@property (nonatomic,readonly) BOOL hasUid; 
@property (nonatomic,retain) NSString * uid;                       //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
-(double)score;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uid;
-(NSString *)languageCode;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(BOOL)hasLanguageCode;
-(BOOL)hasUid;
-(void)setUid:(NSString *)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(BOOL)hasReviewTime;
-(NSString *)snippet;
-(BOOL)hasReviewer;
-(void)setSnippet:(NSString *)arg1 ;
-(BOOL)hasSnippet;
-(void)setHasReviewTime:(BOOL)arg1 ;
-(double)reviewTime;
-(GEOUser *)reviewer;
-(void)setReviewTime:(double)arg1 ;
-(void)setReviewer:(GEOUser *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
