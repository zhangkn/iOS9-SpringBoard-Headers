/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:34 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _MFSearchResultsConsumer <NSObject>
@required
-(BOOL)_isResetting;
-(void)_addResults:(id)arg1 ofType:(unsigned long long)arg2;
-(BOOL)_shouldProcessResultsAfterFinishingType:(unsigned long long)arg1;
-(BOOL)_didFinishSearchForType:(unsigned long long)arg1;
-(void)_enumerateSearchResultTypesInSortOrderUsingBlock:(/*^block*/id)arg1;
-(void)_appendSortedResultsOfType:(unsigned long long)arg1 excluding:(id)arg2 toResults:(id)arg3;

@end
