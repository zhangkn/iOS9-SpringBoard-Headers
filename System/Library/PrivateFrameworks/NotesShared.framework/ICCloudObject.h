/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ICCloudObject <NSObject>
@required
+(id)recordType;
+(id)allCloudObjects;
+(id)existingCloudObjectForRecordID:(id)arg1;
+(id)newCloudObjectForRecord:(id)arg1;
-(id)className;
-(id)recordZoneID;
-(void)deleteFromLocalDatabase;
-(BOOL)isValidObject;
-(void)objectWasFetchedButDoesNotExistInCloud;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1;
-(BOOL)needsToBeFetchedFromCloud;
-(void)fixBrokenReferences;
-(void)mergeDataFromRecord:(id)arg1;
-(id)objectsToBeDeletedBeforeThisObject;
-(BOOL)needsToBePushedToCloud;
-(BOOL)needsToBeDeletedFromCloud;
-(id)newlyCreatedRecord;
-(BOOL)isInICloudAccount;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(void)objectWillBePushedToCloudWithOperation:(id)arg1;
-(void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2;
-(void)objectFailedToBePushedToCloudWithOperation:(id)arg1 error:(id)arg2;
-(id)recordID;

@end
