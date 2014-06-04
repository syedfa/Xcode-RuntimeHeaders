/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSObject<XCSUIBotSummaryStackedBarGraphDelegate>, XCSUIBotSummaryStackedBarGraph, XCSUIBotSummaryStackedBarGraphColumn;

@interface XCSUIBotSummaryStackedBarGraphController : NSObject
{
    BOOL _suppressSuccessBarsIfNoData;
    double _barSpacing;
    double _barWidth;
    NSArray *_graphData;
    NSArray *_visibleGraphData;
    unsigned long long _maxVisibleColumns;
    NSObject<XCSUIBotSummaryStackedBarGraphDelegate> *_delegate;
    XCSUIBotSummaryStackedBarGraphColumn *_popoverTargetColumn;
    XCSUIBotSummaryStackedBarGraph *_graphView;
    unsigned long long _xAxisLabelHeight;
    unsigned long long _yAxisLabelHeight;
}

@property unsigned long long yAxisLabelHeight; // @synthesize yAxisLabelHeight=_yAxisLabelHeight;
@property unsigned long long xAxisLabelHeight; // @synthesize xAxisLabelHeight=_xAxisLabelHeight;
@property(retain, nonatomic) XCSUIBotSummaryStackedBarGraph *graphView; // @synthesize graphView=_graphView;
@property(nonatomic) BOOL suppressSuccessBarsIfNoData; // @synthesize suppressSuccessBarsIfNoData=_suppressSuccessBarsIfNoData;
@property(retain) XCSUIBotSummaryStackedBarGraphColumn *popoverTargetColumn; // @synthesize popoverTargetColumn=_popoverTargetColumn;
@property __weak NSObject<XCSUIBotSummaryStackedBarGraphDelegate> *delegate; // @synthesize delegate=_delegate;
@property unsigned long long maxVisibleColumns; // @synthesize maxVisibleColumns=_maxVisibleColumns;
@property(copy) NSArray *visibleGraphData; // @synthesize visibleGraphData=_visibleGraphData;
@property(copy) NSArray *graphData; // @synthesize graphData=_graphData;
@property double barWidth; // @synthesize barWidth=_barWidth;
@property double barSpacing; // @synthesize barSpacing=_barSpacing;
- (void).cxx_destruct;
- (void)layoutGraph;
- (id)emptyColumnColor;
- (id)barGraphLogAspect;
- (id)initWithGraphView:(id)arg1;

@end
