/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel, UIImageView;

@interface MPVideoDestinationBackgroundView : UIView {

	NSString* _destinationName;
	UILabel* _destinationSubtitleLabel;
	UILabel* _destinationTitleLabel;
	long long _style;
	UIImageView* _videosImageView;

}

@property (nonatomic,copy) NSString * destinationName;              //@synthesize destinationName=_destinationName - In the implementation block
@property (assign,nonatomic) long long style;                       //@synthesize style=_style - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
@end

