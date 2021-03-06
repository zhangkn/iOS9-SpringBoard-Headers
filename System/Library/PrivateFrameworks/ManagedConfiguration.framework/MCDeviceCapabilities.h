/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MCDeviceCapabilities : NSObject {

	BOOL _supportsBlockLevelEncryption;
	BOOL _supportsFileLevelEncryption;

}

@property (nonatomic,readonly) BOOL supportsBlockLevelEncryption;              //@synthesize supportsBlockLevelEncryption=_supportsBlockLevelEncryption - In the implementation block
@property (nonatomic,readonly) BOOL supportsFileLevelEncryption;               //@synthesize supportsFileLevelEncryption=_supportsFileLevelEncryption - In the implementation block
+(id)currentDevice;
-(id)init;
-(BOOL)_mediaDiskIsEncrypted;
-(BOOL)validateCapabilitiesRequiredByRestrictions:(id)arg1 localizedIncompatibilityMessage:(id)arg2 outError:(id*)arg3 ;
-(BOOL)supportsBlockLevelEncryption;
-(BOOL)supportsFileLevelEncryption;
@end

