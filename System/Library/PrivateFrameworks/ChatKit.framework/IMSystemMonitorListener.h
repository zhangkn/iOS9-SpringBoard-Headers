/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMSystemMonitorListener
@optional
-(void)systemApplicationWillEnterForeground;
-(void)systemDidBecomeIdle;
-(void)systemDidBecomeUnidle;
-(void)screenSaverDidStart;
-(void)screenSaverDidStop;
-(void)screenLocked;
-(void)screenUnlocked;
-(void)systemWillSleep;
-(void)systemDidWake;
-(void)systemDidEnterMemoryPressure;
-(void)systemDidLeaveMemoryPressure;
-(void)systemWillShutdown;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationDidBecomeActive;
-(void)systemApplicationWillResignActive;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(void)systemApplicationDidSuspendForEventsOnly;
-(void)systemApplicationDidResumeForEventsOnly;
-(void)notificationCenterWillAppear;
-(void)notificationCenterDidDisappear;
-(void)systemDidStartBackup;
-(void)systemDidStopBackup;
-(void)systemDidFinishMigration;
-(void)systemRestoreStateDidChange;
-(void)systemDidFastUserSwitchOut;
-(void)systemDidFastUserSwitchIn;
-(void)systemDidLogout;
-(void)systemDidLock;
-(void)systemDidUnlock;
-(void)systemScreenDidPowerUp;
-(void)systemScreenDidPowerDown;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)systemDidLeaveDataProtectionLock;
-(void)systemDidEnterDataProtectionLock;

@end

