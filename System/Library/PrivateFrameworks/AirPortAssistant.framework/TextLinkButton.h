/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <UIKit/UIButton.h>

@protocol TextLinkButtonDelegate;
@class NSString;

@interface TextLinkButton : UIButton {

	NSString* _urlString;
	id<TextLinkButtonDelegate> _delegate;

}

@property (assign,nonatomic) id<TextLinkButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * urlString;                             //@synthesize urlString=_urlString - In the implementation block
-(void)setUrlString:(NSString *)arg1 ;
-(NSString *)urlString;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TextLinkButtonDelegate>)arg1 ;
-(void)dealloc;
-(id<TextLinkButtonDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)tapAction:(id)arg1 ;
@end
