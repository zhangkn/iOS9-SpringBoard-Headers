/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface CPLPlaceAnnotation : NSObject <NSSecureCoding, NSCopying> {

	NSNumber* _placeLevel;
	NSString* _placeName;

}

@property (nonatomic,copy) NSNumber * placeLevel;              //@synthesize placeLevel=_placeLevel - In the implementation block
@property (nonatomic,copy) NSString * placeName;               //@synthesize placeName=_placeName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)placeName;
-(NSNumber *)placeLevel;
-(void)setPlaceLevel:(NSNumber *)arg1 ;
-(void)setPlaceName:(NSString *)arg1 ;
@end

