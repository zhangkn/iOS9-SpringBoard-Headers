/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIActionsViewElement;

@interface SKUITrackViewElement : SKUIViewElement {

	char _enabled;
	BOOL _selected;

}

@property (getter=isSelected,nonatomic,readonly) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) SKUIActionsViewElement * swipeActions; 
-(BOOL)isEnabled;
-(BOOL)isSelected;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(SKUIActionsViewElement *)swipeActions;
@end

