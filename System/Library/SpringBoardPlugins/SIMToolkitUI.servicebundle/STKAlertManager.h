/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/SpringBoardPlugins/SIMToolkitUI.servicebundle/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SIMToolkitUI/SIMToolkitUI-Structs.h>
#import <libobjc.A.dylib/SBPluginBundleController.h>

@class STKBaseAlertViewController;

@interface STKAlertManager : NSObject <SBPluginBundleController> {

	STKBaseAlertViewController* _currentAlertViewController;
	BOOL _wantsNextUserEvent;
	CTServerConnectionRef _serverConnection;

}

@property (nonatomic,retain) STKBaseAlertViewController * currentAlertViewController;              //@synthesize currentAlertViewController=_currentAlertViewController - In the implementation block
@property (assign,nonatomic) BOOL wantsNextUserEvent;                                              //@synthesize wantsNextUserEvent=_wantsNextUserEvent - In the implementation block
+(id)sharedInstance;
+(void)awakeFromBundle;
-(void)dealloc;
-(CTServerConnectionRef)serverConnection;
-(void)registerForAlerts;
-(STKBaseAlertViewController *)currentAlertViewController;
-(void)setCurrentAlertViewController:(STKBaseAlertViewController *)arg1 ;
-(void)startSTKMonitor;
-(void)idleScreenShown:(id)arg1 ;
-(void)dismissCurrentlyDisplayedAlert;
-(void)userEventOccurred:(id)arg1 ;
-(id)createViewControllerForAlert:(id)arg1 ;
-(BOOL)wantsNextUserEvent;
-(void)setWantsNextUserEvent:(BOOL)arg1 ;
@end

