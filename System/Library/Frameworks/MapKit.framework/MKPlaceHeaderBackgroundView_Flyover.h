/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceHeaderBackgroundView.h>

@class UITapGestureRecognizer, MKMapView, GEOPDFlyover;

@interface MKPlaceHeaderBackgroundView_Flyover : MKPlaceHeaderBackgroundView {

	BOOL _animationPaused;
	BOOL _animationPrepared;
	UITapGestureRecognizer* _interactionTapRecognizer;
	MKMapView* _mapView;
	GEOPDFlyover* _flyover;

}
-(void)prepareForPresentation;
-(id)initWithFrame:(CGRect)arg1 mapItem:(id)arg2 ;
-(void)_pauseTour;
-(void)setMapView:(id)arg1 ;
-(id)mapView;
-(void)setFrame:(CGRect)arg1 ;
-(void)reset;
-(void)resume;
-(void)present;
-(void)pause;
-(void)setFlyover:(id)arg1 ;
-(id)flyover;
@end
