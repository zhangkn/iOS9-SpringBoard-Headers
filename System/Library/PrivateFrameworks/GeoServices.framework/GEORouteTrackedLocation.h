/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute, GEORouteMatch, GEOLocation, NSDate;

@interface GEORouteTrackedLocation : NSObject {

	GEOComposedRoute* _route;
	GEORouteMatch* _routeMatch;
	GEOLocation* _rawLocation;
	NSDate* _lastTimeInTunnel;
	PolylineCoordinate _lastGoodMatchCoordinate;
	PolylineCoordinate _newStepLastRouteCoord;
	SCD_Struct_GE16 _newStepLastGeoCoord;
	unsigned long long _newStepProgressions;
	double _newStepDistanceTraveled;

}

@property (nonatomic,readonly) GEOComposedRoute * route;                                //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) GEORouteMatch * routeMatch;                              //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,readonly) GEOLocation * rawLocation;                               //@synthesize rawLocation=_rawLocation - In the implementation block
@property (nonatomic,readonly) PolylineCoordinate lastGoodMatchCoordinate;              //@synthesize lastGoodMatchCoordinate=_lastGoodMatchCoordinate - In the implementation block
@property (nonatomic,retain) NSDate * lastTimeInTunnel;                                 //@synthesize lastTimeInTunnel=_lastTimeInTunnel - In the implementation block
@property (nonatomic,readonly) double timeSinceTunnel; 
@property (nonatomic,readonly) unsigned long long newStepProgressions;                  //@synthesize newStepProgressions=_newStepProgressions - In the implementation block
@property (nonatomic,readonly) double newStepDistanceTraveled;                          //@synthesize newStepDistanceTraveled=_newStepDistanceTraveled - In the implementation block
@property (nonatomic,readonly) PolylineCoordinate newStepLastRouteCoord;                //@synthesize newStepLastRouteCoord=_newStepLastRouteCoord - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE16 newStepLastGeoCoord;                     //@synthesize newStepLastGeoCoord=_newStepLastGeoCoord - In the implementation block
-(void)dealloc;
-(id)description;
-(GEOComposedRoute *)route;
-(GEORouteMatch *)routeMatch;
-(void)updateWithRouteMatch:(id)arg1 ;
-(id)initWithRoute:(id)arg1 ;
-(PolylineCoordinate)lastGoodMatchCoordinate;
-(SCD_Struct_GE16)newStepLastGeoCoord;
-(void)updateWithRouteMatch:(id)arg1 rawLocation:(id)arg2 newStepProgressions:(unsigned long long)arg3 newStepDistanceTraveled:(double)arg4 newStepLastRouteCoord:(PolylineCoordinate)arg5 newStepLastGeoCoord:(SCD_Struct_GE16)arg6 ;
-(PolylineCoordinate)newStepLastRouteCoord;
-(NSDate *)lastTimeInTunnel;
-(void)setLastTimeInTunnel:(NSDate *)arg1 ;
-(unsigned long long)newStepProgressions;
-(void)forceGoodRouteMatch;
-(double)timeSinceTunnel;
-(double)newStepDistanceTraveled;
-(void)updateWithProjectedRouteMatch:(id)arg1 ;
-(GEOLocation *)rawLocation;
@end

