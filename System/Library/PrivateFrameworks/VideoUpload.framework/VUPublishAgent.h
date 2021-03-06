/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PLPublishingAgent.h>
#import <libobjc.A.dylib/VUPublishViewControllerDelegate.h>
#import <libobjc.A.dylib/VUPublishPostDelegate.h>

@class UINavigationController, VUPublishPost, VUPublishViewController;

@interface VUPublishAgent : PLPublishingAgent <VUPublishViewControllerDelegate, VUPublishPostDelegate> {

	UINavigationController* _navigationController;
	VUPublishPost* _publishPost;
	VUPublishViewController* _publishViewController;

}
-(id)navigationController;
-(id)mediaTitle;
-(BOOL)allowsViewingOnHost;
-(BOOL)allowsTellingFriend;
-(void)resignPublishingSheetResponders;
-(void)publishViewControllerPublished:(id)arg1 ;
-(void)publishViewControllerCancelled:(id)arg1 ;
-(Class)publishViewControllerClass;
-(void)publishPost:(id)arg1 didFailWithError:(id)arg2 ;
-(void)publishPostSucceeded:(id)arg1 ;
-(void)publishPost:(id)arg1 hasWrittenBytes:(long long)arg2 expectsToWrite:(long long)arg3 ;
@end

