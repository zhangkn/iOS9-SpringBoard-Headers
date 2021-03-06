/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/QLPreviewUIItem.h>

@class UIImage, UIDocumentInteractionController, QLPreviewThumbnailGenerator, NSURL, NSOperation, NSOperationQueue, NSMutableArray, NSError, NSString, NSArray;

@interface QLPreviewArchiveItem : NSObject <QLPreviewUIItem> {

	UIDocumentInteractionController* _archiveController;
	QLPreviewThumbnailGenerator* _thumbnailGenerator;
	NSURL* _unarchivedURL;
	NSOperation* _unarchiveOperation;
	NSOperationQueue* _unarchiveOperationQueue;
	NSMutableArray* _completionBlocks;
	NSError* _unarchivingError;
	NSString* _path;
	long long _previewItemIndex;
	long long _UIItemIndex;
	long long _level;
	NSURL* _rootUnzippingURL;
	NSArray* _subItems;

}

@property (retain) NSString * path;                                      //@synthesize path=_path - In the implementation block
@property (readonly) BOOL unarchived; 
@property (assign) long long previewItemIndex;                           //@synthesize previewItemIndex=_previewItemIndex - In the implementation block
@property (assign) long long UIItemIndex;                                //@synthesize UIItemIndex=_UIItemIndex - In the implementation block
@property (assign) long long level;                                      //@synthesize level=_level - In the implementation block
@property (retain) NSURL * rootUnzippingURL;                             //@synthesize rootUnzippingURL=_rootUnzippingURL - In the implementation block
@property (copy) NSArray * subItems;                                     //@synthesize subItems=_subItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
@property (readonly) UIImage * icon; 
@property (readonly) BOOL isFolder; 
-(BOOL)isFolder;
-(void)updateIconWithSize:(CGSize)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)cancelIconUpdate;
-(long long)previewItemIndex;
-(id)initWithArchiveController:(id)arg1 path:(id)arg2 ;
-(void)setPreviewItemIndex:(long long)arg1 ;
-(void)setUIItemIndex:(long long)arg1 ;
-(void)setRootUnzippingURL:(NSURL *)arg1 ;
-(void)setSubItems:(NSArray *)arg1 ;
-(NSArray *)subItems;
-(NSURL *)rootUnzippingURL;
-(void)unarchiveWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)unarchived;
-(id)unarchivingError;
-(long long)UIItemIndex;
-(NSString *)description;
-(NSString *)path;
-(void)setLevel:(long long)arg1 ;
-(long long)level;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(UIImage *)icon;
-(NSURL *)previewItemURL;
-(void)cleanup;
-(BOOL)isPromisedItem;
@end

