/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/system/libdispatch.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libdispatch.dylib/libdispatch.dylib-Structs.h>
#import <Foundation/_NSDispatchData.h>
#import <libobjc.A.dylib/OS_dispatch_data.h>

@protocol OS_dispatch_data <OS_dispatch_object>
@end


@class NSString;

@interface OS_dispatch_data : _NSDispatchData <OS_dispatch_data>

@property (readonly) unsigned long long length; 
@property (readonly) const void* bytes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5 ;
-(BOOL)_isCompact;
-(void)dealloc;
-(id)init;
-(NSString *)debugDescription;
-(unsigned long long)length;
-(const void*)bytes;
-(void)_setContext:(void*)arg1 ;
-(void)finalize;
-(void*)_getContext;
-(void)_setFinalizer:(/*function pointer*/void*)arg1 ;
-(void)_setTargetQueue:(id)arg1 ;
-(BOOL)_bytesAreVM;
@end

