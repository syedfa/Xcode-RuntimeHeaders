/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface IDEAppStatistics : NSObject
{
}

+ (void)recordDocDownloadInteraction:(id)arg1;
+ (void)recordAppDidShutdown:(id)arg1;
+ (void)recordAppAboutToShutdown;
+ (void)scheduleAppReportWithStartTime:(double)arg1;
+ (void)recordAppUsedGPUDebugger;
+ (void)performAppReportWithStartupDuration:(double)arg1;
+ (id)_diskTypes;
+ (id)_diskTypeFor:(struct __DADisk *)arg1;
+ (unsigned long long)memInUse;
+ (unsigned long long)_totalRam;

@end

