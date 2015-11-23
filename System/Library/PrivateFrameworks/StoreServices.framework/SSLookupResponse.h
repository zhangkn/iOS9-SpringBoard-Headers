/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSDate, NSMutableArray, SSMetricsPageEvent, NSDictionary, NSArray, SSMetricsConfiguration, NSString;

@interface SSLookupResponse : NSObject <SSXPCCoding> {

	NSDate* _expirationDate;
	NSMutableArray* _itemOrder;
	SSMetricsPageEvent* _metricsPageEvent;
	NSDictionary* _response;

}

@property (nonatomic,readonly) BOOL mpIsPersonalizedOffer; 
@property (nonatomic,copy) NSDate * expirationDate;                                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) NSArray * allItems; 
@property (nonatomic,readonly) SSMetricsConfiguration * metricsConfiguration; 
@property (nonatomic,retain) SSMetricsPageEvent * metricsPageEvent;                        //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)mpShowBuysWithNoCompletionOffer;
+(BOOL)mpVerboseCMCLogging;
+(id)mpLoadDebugCompletionsResponseWithStoreLookupID:(id)arg1 ;
+(BOOL)mpFakeCompletionDataForBuys;
-(id)mpCompletionOfferResponseDictionaryWithLocalAlbumsCollection:(id)arg1 ;
-(void)mpSaveCompletionsResponseForDebuggingIfNecessaryWithExpectedStoreLookupID:(id)arg1 ;
-(BOOL)mpIsPersonalizedOffer;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(id)valueForProperty:(id)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(SSMetricsPageEvent *)metricsPageEvent;
-(NSDictionary *)responseDictionary;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSArray *)allItems;
-(SSMetricsConfiguration *)metricsConfiguration;
-(id)itemForKey:(id)arg1 ;
-(void)_setMetricsPageEvent:(id)arg1 ;
-(id)initWithLocationResponseDictionary:(id)arg1 ;
-(void)_enumerateItemsWithBlock:(/*^block*/id)arg1 ;
-(id)appStoreURLWithReason:(long long)arg1 initialIndex:(long long)arg2 ;
@end
