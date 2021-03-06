/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDMultiLocalizedString : PBCodable <NSCopying> {

	NSMutableArray* _localizedStrings;

}

@property (nonatomic,retain) NSMutableArray * localizedStrings;              //@synthesize localizedStrings=_localizedStrings - In the implementation block
-(id)bestLocalizedName;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearLocalizedStrings;
-(void)setLocalizedStrings:(NSMutableArray *)arg1 ;
-(unsigned long long)localizedStringsCount;
-(NSMutableArray *)localizedStrings;
-(void)addLocalizedString:(id)arg1 ;
-(id)localizedStringAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

