/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IDEStackedBarChartViewControllerDataSource <NSObject>
- (unsigned long long)stackedBarChartViewController:(id)arg1 countOfFailedTestsForColumn:(unsigned long long)arg2;
- (unsigned long long)stackedBarChartViewController:(id)arg1 countOfPassedTestsForColumn:(unsigned long long)arg2;
- (unsigned long long)stackedBarChartViewController:(id)arg1 countOfTestsForColumn:(unsigned long long)arg2;
- (BOOL)stackedBarChartViewController:(id)arg1 didIntegrationGenerateWarningsOrIssuesForColumn:(unsigned long long)arg2;
- (BOOL)stackedBarChartViewController:(id)arg1 didIntegrationFailWithBuildErrorsForColumn:(unsigned long long)arg2;
- (BOOL)stackedBarChartViewController:(id)arg1 didBotFailForIntegrationForColumn:(unsigned long long)arg2;
- (id)stackedBarChartViewController:(id)arg1 labelForColumn:(unsigned long long)arg2;
- (id)stackedBarChartViewController:(id)arg1 userInfoForColumn:(unsigned long long)arg2;
- (id)stackedBarChartViewController:(id)arg1 valueForStackedBarChartBar:(id)arg2 column:(unsigned long long)arg3;
- (unsigned long long)numberOfColumnsInStackedBarChartViewController:(id)arg1;
@end

