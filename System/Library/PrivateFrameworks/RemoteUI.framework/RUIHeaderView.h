/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKit/UIView.h>
#import <RemoteUI/RemoteUITableHeader.h>

@class UILabel, UIImageView, NSString;

@interface RUIHeaderView : UIView <RemoteUITableHeader> {

	UILabel* _headerLabel;
	UILabel* _detailHeaderLabel;
	UILabel* _subHeaderLabel;
	UIImageView* _iconView;
	int _imageAlignment;
	BOOL _isFirstSection;
	BOOL _customIconSize;
	double _headerLabelBottomPadding;
	UIEdgeInsets _margins;

}

@property (nonatomic,readonly) UILabel * headerLabel; 
@property (nonatomic,readonly) UILabel * subHeaderLabel; 
@property (nonatomic,readonly) UILabel * detailHeaderLabel; 
@property (assign,nonatomic) UIEdgeInsets margins;                         //@synthesize margins=_margins - In the implementation block
@property (assign,nonatomic) double headerLabelBottomPadding;              //@synthesize headerLabelBottomPadding=_headerLabelBottomPadding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)subHeaderLabel;
-(void)setIconImage:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setImageAlignment:(int)arg1 ;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)headerLabel;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(void)setSectionIsFirst:(BOOL)arg1 ;
-(double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)setDetailText:(id)arg1 attributes:(id)arg2 ;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2 ;
-(id)initWithAttributes:(id)arg1 ;
-(CGRect)_iconFrame;
-(void)setHeaderColor:(id)arg1 ;
-(void)setSubHeaderAlignment:(long long)arg1 ;
-(void)setSubHeaderColor:(id)arg1 ;
-(UILabel *)detailHeaderLabel;
-(double)headerLabelBottomPadding;
-(void)setHeaderLabelBottomPadding:(double)arg1 ;
-(void)setHeaderAlignment:(long long)arg1 ;
@end

