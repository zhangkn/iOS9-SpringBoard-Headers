/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct {
	char* field1;
	char* field2;
	long long field3;
	unsigned long long field4;
} SCD_Struct_TD0;

typedef struct {
	char* field1;
	char* field2;
	renditionkeytoken field3[5_];
	long long field4;
	long long field5;
	SCD_Struct_TD0 field6[12];
} SCD_Struct_TD1;

typedef struct {
	char* field1;
	char* field2;
	BOOL field3;
	long long field4;
	SCD_Struct_TD1 field5[7];
} SCD_Struct_TD2;

typedef struct CGContext* CGContextRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_TD7;

typedef struct renditionkeytoken {
	unsigned short identifier;
	unsigned short value;
} renditionkeytoken;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_Co10;

typedef struct {
	double top;
	double left;
	double bottom;
	double right;
} SCD_Struct_TD11;

typedef struct {
	char* field1;
	char* field2;
	SCD_Struct_TD0 field3[5_];
	long long field4;
	long long field5;
	renditionkeytoken field6[12];
} SCD_Struct_TD12;

typedef struct {
	char* field1;
	char* field2;
	BOOL field3;
	long long field4;
	SCD_Struct_TD12 field5[7];
} SCD_Struct_TD13;

typedef struct PSDImageInfo {
	unsigned width;
	unsigned height;
	unsigned short mode;
	unsigned short bitsPerSample;
	unsigned short samplesPerPixel;
	int isDrawable;
} PSDImageInfo;

typedef struct CGImage* CGImageRef;

typedef struct {
	CGSize field1;
	CGSize field2;
	CGSize field3;
} SCD_Struct_TD16;

