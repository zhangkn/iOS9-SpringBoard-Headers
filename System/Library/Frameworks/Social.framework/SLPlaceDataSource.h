/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SLPlaceDataSource
@property (__weak) NSObject*<SLPlaceDataSourceDelegate> delegate; 
@required
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)fetchPlaces;
-(void)cancelPlaceFetch;
-(void)fetchPlacesWithSearchString:(id)arg1;
-(void)setDelegate:(id)arg1;
-(NSObject*<SLPlaceDataSourceDelegate>)delegate;
-(id)currentLocation;

@end
