/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLPhotoDerivativeUtilities : NSObject
+(id)generateDerivativeForMSAsset:(id)arg1 derivativeType:(int)arg2 withSpecificationInfo:(id)arg3 collectionGUID:(id)arg4 ;
+(BOOL)resizeImageForUtiType:(id)arg1 masterFilePath:(id)arg2 derivedSize:(CGSize)arg3 derivedAssetPath:(id)arg4 ;
+(BOOL)_resizeImageUsingNewScalerForUtiType:(id)arg1 inputFilePath:(id)arg2 outputFilePath:(id)arg3 derivedSize:(CGSize)arg4 ;
+(BOOL)_resizeImageUsingHWForUtiType:(id)arg1 inputFilePath:(id)arg2 outputFilePath:(id)arg3 derivedSize:(CGSize)arg4 ;
+(BOOL)_resizeImageUsingSWForUtiType:(id)arg1 inputFilePath:(id)arg2 outputFilePath:(id)arg3 derivedSize:(CGSize)arg4 ;
@end
