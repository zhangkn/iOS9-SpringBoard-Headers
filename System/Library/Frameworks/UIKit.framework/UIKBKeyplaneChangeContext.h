/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIKBKeyplaneChangeContext : NSObject {

	BOOL _sizeDidChange;
	BOOL _splitWidthsChanged;
	BOOL _selfSizingChanged;
	BOOL _updateAssistantView;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                           //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL sizeDidChange;                  //@synthesize sizeDidChange=_sizeDidChange - In the implementation block
@property (assign,nonatomic) BOOL splitWidthsChanged;               //@synthesize splitWidthsChanged=_splitWidthsChanged - In the implementation block
@property (assign,nonatomic) BOOL selfSizingChanged;                //@synthesize selfSizingChanged=_selfSizingChanged - In the implementation block
@property (assign,nonatomic) BOOL updateAssistantView;              //@synthesize updateAssistantView=_updateAssistantView - In the implementation block
+(id)keyplaneChangeContextWithSize:(CGSize)arg1 ;
+(id)keyplaneChangeContext;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setSplitWidthsChanged:(BOOL)arg1 ;
-(BOOL)sizeDidChange;
-(BOOL)splitWidthsChanged;
-(BOOL)selfSizingChanged;
-(void)setSelfSizingChanged:(BOOL)arg1 ;
-(BOOL)updateAssistantView;
-(void)setUpdateAssistantView:(BOOL)arg1 ;
@end
