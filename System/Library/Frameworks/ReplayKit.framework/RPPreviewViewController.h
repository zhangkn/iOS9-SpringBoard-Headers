/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/RPVideoEditorViewControllerDelegate.h>

@protocol RPPreviewViewControllerDelegate;
@interface RPPreviewViewController : UIViewController <RPVideoEditorViewControllerDelegate> {

	id<RPPreviewViewControllerDelegate> _previewControllerDelegate;

}

@property (assign,nonatomic,__weak) id<RPPreviewViewControllerDelegate> previewControllerDelegate;              //@synthesize previewControllerDelegate=_previewControllerDelegate - In the implementation block
+(void)loadPreviewViewControllerWithMovieURL:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPreviewControllerDelegate:(id<RPPreviewViewControllerDelegate>)arg1 ;
-(void)videoEditor:(id)arg1 didFinishWithActivityTypes:(id)arg2 ;
-(void)extensionDidFinishWithActivityTypes:(id)arg1 ;
-(id<RPPreviewViewControllerDelegate>)previewControllerDelegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

