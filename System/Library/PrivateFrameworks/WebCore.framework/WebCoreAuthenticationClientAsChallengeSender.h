/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/NSURLAuthenticationChallengeSender.h>

@class NSString;

@interface WebCoreAuthenticationClientAsChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {

	AuthenticationClient* m_client;
	CFURLAuthChallengeRef m_cfChallenge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(CFURLAuthChallengeRef)cfChallenge;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(AuthenticationClient*)client;
-(id)initWithAuthenticationClient:(AuthenticationClient*)arg1 ;
-(void)detachClient;
-(void)setCFChallenge:(CFURLAuthChallengeRef)arg1 ;
@end

