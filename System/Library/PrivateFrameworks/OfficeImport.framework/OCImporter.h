/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OCMapper.h>

@class NSURL, NSData, OCDReader, TCImportTracing, OITSUProgressContext, NSString;

@interface OCImporter : OCMapper {

	NSURL* mURL;
	NSData* mData;
	OCDReader* mReader;
	TCImportTracing* mTracing;
	BOOL mTryAlternateReader;
	OITSUProgressContext* mProgressContext;
	NSString* _docPassphrase;

}

@property (nonatomic,readonly) TCImportTracing * tracing; 
@property (retain) OITSUProgressContext * progressContext; 
@property (nonatomic,retain) NSString * docPassphrase;                  //@synthesize docPassphrase=_docPassphrase - In the implementation block
+(void)initialize;
-(BOOL)start;
-(BOOL)isXML;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(id)displayName;
-(BOOL)setPassphrase:(id)arg1 ;
-(void)setProgressContext:(OITSUProgressContext *)arg1 ;
-(OITSUProgressContext *)progressContext;
-(BOOL)isDocumentEncryptedUnsupportedVersionHelper:(BOOL*)arg1 errorMessage:(id*)arg2 readError:(BOOL*)arg3 ;
-(void)setDocPassphrase:(NSString *)arg1 ;
-(BOOL)tryAlternateReader;
-(BOOL)isDocumentEncryptedUnsupportedVersion:(BOOL*)arg1 errorMessage:(id*)arg2 ;
-(id)filename;
-(void)finalizeWithDocumentState:(id)arg1 ;
-(TCImportTracing *)tracing;
-(NSString *)docPassphrase;
@end

