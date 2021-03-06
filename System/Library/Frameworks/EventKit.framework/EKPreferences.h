/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CalPreferences;

@interface EKPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (assign,nonatomic) double travelEngineThrottlePeriod; 
@property (assign,nonatomic) BOOL refiringReminderAlarmsEnabled; 
@property (assign,nonatomic) BOOL useShortReminderSnoozeInterval; 
@property (assign,nonatomic) BOOL useShortReminderRefireInterval; 
@property (assign,nonatomic) BOOL alwaysSetArrivedAndSettledForReminders; 
@property (assign,nonatomic) BOOL remindMeAboutThisInCalendarWidgetEnabled; 
@property (assign,nonatomic) BOOL privacyPaneHasBeenAcknowledged; 
+(id)shared;
-(double)travelEngineThrottlePeriod;
-(void)setTravelEngineThrottlePeriod:(double)arg1 ;
-(BOOL)refiringReminderAlarmsEnabled;
-(void)setRefiringReminderAlarmsEnabled:(BOOL)arg1 ;
-(BOOL)useShortReminderSnoozeInterval;
-(void)setUseShortReminderSnoozeInterval:(BOOL)arg1 ;
-(BOOL)useShortReminderRefireInterval;
-(void)setUseShortReminderRefireInterval:(BOOL)arg1 ;
-(BOOL)alwaysSetArrivedAndSettledForReminders;
-(void)setAlwaysSetArrivedAndSettledForReminders:(BOOL)arg1 ;
-(BOOL)remindMeAboutThisInCalendarWidgetEnabled;
-(void)setRemindMeAboutThisInCalendarWidgetEnabled:(BOOL)arg1 ;
-(BOOL)privacyPaneHasBeenAcknowledged;
-(void)setPrivacyPaneHasBeenAcknowledged:(BOOL)arg1 ;
-(id)init;
@end

