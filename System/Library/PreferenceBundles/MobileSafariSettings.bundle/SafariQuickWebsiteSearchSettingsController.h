/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>

@class UIBarButtonItem;

@interface SafariQuickWebsiteSearchSettingsController : SafariSettingsListController {

	UIBarButtonItem* _deleteBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;

}
-(id)specifiers;
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updateEditButton;
-(id)_cancelBarButtonItem;
-(void)_cancelEditing:(id)arg1 ;
-(void)_quickWebsiteSearchControllerDidFinishLoading:(id)arg1 ;
-(id)_deleteBarButtonItem;
-(void)_setUseSiteSpecificSearch:(id)arg1 specifier:(id)arg2 ;
-(BOOL)_hasSearchProviders;
-(void)_deleteItemsForSpecifiers:(id)arg1 ;
-(void)_deleteSelectedItems:(id)arg1 ;
-(void)willBecomeActive;
-(void)_updateDeleteButton;
@end
