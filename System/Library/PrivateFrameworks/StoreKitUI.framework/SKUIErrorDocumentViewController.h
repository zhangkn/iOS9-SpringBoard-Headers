/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUIClientContext, NSString;

@interface SKUIErrorDocumentViewController : SKUIViewController <SKUIDocumentViewController> {

	SKUIClientContext* _clientContext;
	unsigned long long _contentUnavailableStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)documentDidUpdate:(id)arg1 ;
-(id)initWithBackgroundColor:(id)arg1 clientContext:(id)arg2 ;
@end
