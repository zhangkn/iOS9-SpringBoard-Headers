//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCalendar, NSDate, NSDateIntervalFormatter, NSString, SUAutoInstallForecast;

@interface _SBAutoInstallForecastDateCache : NSObject
{
    unsigned long long _scheduleType;
    SUAutoInstallForecast *_forecast;
    NSCalendar *_calendar;
    NSDate *_roundedStartDate;
    NSDate *_roundedEndDate;
    NSDateIntervalFormatter *_timeIntervalFormatter;
    _Bool _parsed;
    NSString *_roundedTimeInterval;
}

@property(retain, nonatomic) NSString *roundedTimeInterval; // @synthesize roundedTimeInterval=_roundedTimeInterval;
@property(nonatomic) unsigned long long scheduleType; // @synthesize scheduleType=_scheduleType;
- (id)_componentsFromDate:(id)arg1;
- (void)_computeTonightRangeRelativeToDate:(id)arg1 extraDayOffset:(long long)arg2 outStart:(id *)arg3 outEnd:(id *)arg4;
- (_Bool)_isStart:(id)arg1 end:(id)arg2 withinDateRange:(id)arg3 end:(id)arg4;
- (void)_parseForecast;
- (id)_timeIntervalFormatter;
- (id)description;
- (void)dealloc;
- (id)initWithForecast:(id)arg1;

@end

