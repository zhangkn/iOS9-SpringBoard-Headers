/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _DECInternalConsumer : NSObject {

	unsigned long long _consumerType;
	unsigned long long _category;

}

@property (assign,nonatomic) unsigned long long consumerType;              //@synthesize consumerType=_consumerType - In the implementation block
@property (assign,nonatomic) unsigned long long category;                  //@synthesize category=_category - In the implementation block
-(void)setCategory:(unsigned long long)arg1 ;
-(unsigned long long)category;
-(void)receivePrediction:(id)arg1 reply:(/*^block*/id)arg2 ;
-(unsigned long long)consumerType;
-(void)setConsumerType:(unsigned long long)arg1 ;
-(id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 ;
@end
