/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class CLVisit;

@interface RTDeviceLocationPredictorVisitNotification : RTNotification {

	CLVisit* _visit;

}

@property (nonatomic,retain) CLVisit * visit;              //@synthesize visit=_visit - In the implementation block
+(id)notificationName;
-(CLVisit *)visit;
-(id)initWithVisit:(id)arg1 ;
-(void)setVisit:(CLVisit *)arg1 ;
@end

