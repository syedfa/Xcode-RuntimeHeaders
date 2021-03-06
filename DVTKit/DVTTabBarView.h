/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTKit/DVTSlidingViewsBar.h>

#import "DVTMorphingDragImageDropTarget-Protocol.h"
#import "DVTTabSwitcherDelegate-Protocol.h"

@class DVTNewTabButton, DVTTabButton, DVTTabSwitcher, DVTTabbedWindowTabViewItem, NSImage, NSLock;

@interface DVTTabBarView : DVTSlidingViewsBar <DVTMorphingDragImageDropTarget, DVTTabSwitcherDelegate>
{
    id <DVTTabbedWindowControlling> tabbedWindowController;
    DVTTabSwitcher *tabSwitcher;
    NSImage *_windowBackgroundImage;
    NSLock *_windowBackgroundImageLock;
    DVTTabbedWindowTabViewItem *_tabViewItemForOverflowButton;
    DVTTabButton *_draggedTab;
    DVTTabButton *_tabSelectedBeforeTabDrag;
    DVTNewTabButton *_newTabButton;
    DVTTabbedWindowTabViewItem *_seperatorUpdateLastSelectedTabViewItem;
    DVTTabbedWindowTabViewItem *_lastSelectedTabViewItem;
    int _modeOfSeparatorBeforeSpecialButtons;
    int _directionOfSeparatorBeforeSpecialButtons;
    BOOL _separatorBeforeSpecialButtonsUsesActiveTabColor;
    BOOL _areCloseButtonsVisible;
    BOOL _reorderingButton;
    BOOL _isReadyToUse;
    BOOL _reorderingTabs;
}

+ (double)tabBackgroundImageHeight;
+ (id)inactiveTabBackgroundForNonMainWindow;
+ (id)activeTabBackgroundForNonMainWindow;
+ (id)inactiveTabBackgroundForMainWindow;
+ (id)activeTabBackgroundForMainWindow;
@property(retain, nonatomic) DVTTabSwitcher *tabSwitcher; // @synthesize tabSwitcher;
@property(retain) id <DVTTabbedWindowControlling> tabbedWindowController; // @synthesize tabbedWindowController;
- (void).cxx_destruct;
- (void)_windowBackgroundDidChange;
- (id)_windowBackgroundImage;
- (void)_setWindowBackgroundImage:(id)arg1;
- (void)_updateCloseButtonsVisibility;
- (void)_createTab:(id)arg1;
- (id)_leftTruncateStrings:(id)arg1 withFont:(id)arg2 width:(double)arg3;
- (id)_leftTruncateWordsFrom:(id)arg1 withFont:(id)arg2 width:(double)arg3 maxWordsToRemove:(unsigned long long)arg4;
- (void)_reselectTabSelectedBeforeTabDrag;
- (void)_detachTab:(id)arg1 withClickPoint:(struct CGPoint)arg2 sourceView:(id)arg3;
- (void)_selectClippedTabViewItem:(id)arg1;
- (void)_didClickCloseButton:(id)arg1;
- (void)_didClickTabButton:(id)arg1;
- (void)_setTabViewItemForOverflowButton:(id)arg1;
- (void)_setTabState:(long long)arg1 forTab:(id)arg2;
- (unsigned long long)_visibleButtonCountForLayout;
- (void)_updateKeyLoop;
- (void)_layOutButtons;
- (void)_updateSeparators;
- (id)_sortedVisibleButtons;
- (void)_setSpecialSeparatorsAndClipIndicatorNeedDisplay;
- (void)_setSeparatorBeforeSpecialButtonsUsesActiveTabColor:(BOOL)arg1;
- (void)_setModeOfSeparatorBeforeSpecialButtons:(int)arg1;
- (void)_setDirectionOfSeparatorBeforeSpecialButtons:(int)arg1;
- (struct CGRect)_separatorBetweenSpecialButtonsRect;
- (struct CGRect)_separatorBeforeSpecialButtonsRect;
- (BOOL)_isVisible;
- (void)_getButtonWidth:(double *)arg1 leftover:(unsigned long long *)arg2 isClipping:(char *)arg3;
- (id)_backgroundFillImage;
- (double)_availableWidthForButtonsWhenClipped;
- (double)_availableWidthForButtonsWhenUnclipped;
- (unsigned long long)_numberOfVisibleTabViewItems;
- (void)_removeTabButton:(id)arg1;
- (id)_insertTabButtonWithTabViewItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)_clipIndicatorIsShowing;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)morphingDragImage:(id)arg1 performDragOperation:(id)arg2;
- (void)morphingDragImage:(id)arg1 draggingExited:(id)arg2;
- (unsigned long long)morphingDragImage:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)morphingDragImage:(id)arg1 draggingEntered:(id)arg2;
- (id)menuItemsForClippedItemsIndicator:(id)arg1;
- (void)tabSwitcherDidChangeNumberOfTabViewItems:(id)arg1;
- (void)tabSwitcher:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabSwitcher:(id)arg1 willSelectTabViewItem:(id)arg2;
- (void)animation:(id)arg1 didSlideView:(id)arg2;
- (BOOL)performDragOperation:(id)arg1;
- (void)updateLabelNowForTab:(id)arg1;
- (void)updateLabelSoonForTab:(id)arg1;
- (void)updateTabTitlesNow;
- (void)tabTitlesDidChange;
- (void)getButtonWidth:(double *)arg1 leftover:(unsigned long long *)arg2 isClipping:(char *)arg3 forTabCount:(unsigned long long)arg4;
- (struct CGSize)dragImageSizeForTab:(id)arg1;
- (void)disconnectFromTabbedWindowController;
- (void)detachTabAndPositionUnderCursor:(id)arg1 sourceView:(id)arg2;
- (void)detachTab:(id)arg1 event:(id)arg2;
- (void)didDragTab:(id)arg1;
- (void)willDragTab:(id)arg1;
- (void)selectTabViewItem:(id)arg1;
- (id)selectedTabViewItem;
- (unsigned long long)numberOfTabs;
- (void)moveTabViewItem:(id)arg1 toIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfTabViewItem:(id)arg1;
- (void)performDragOperationForTabViewItem:(id)arg1 draggingInfo:(id)arg2;
- (struct CGRect)clipRectForSlidingButton:(id)arg1;
- (id)windowBackgroundImage;
- (void)setReadyToUse;
- (void)replaceTabSwitcher:(id)arg1;
- (struct CGRect)contentFrame;
- (id)newTabButton;
- (double)slidingWidthForView:(id)arg1;
- (double)widthOfDraggingInfo:(id)arg1;
- (id)viewPinnedToOverflowIndicator;
- (unsigned long long)updateDropTarget:(id)arg1;
- (void)setDropIndex:(unsigned long long)arg1;
- (void)refreshButtons;
- (void)draggedSlidingView:(id)arg1;
- (void)reorderedSlidingView:(id)arg1;
- (BOOL)isReorderingTabViews;
- (double)minButtonX;
- (double)maxSlidingViewX;
- (double)minSlidingViewX;
- (double)maxButtonXWithClipIndicator;
- (double)maxButtonXWithoutClipIndicator;
- (id)menuForEvent:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)_installNewTabButton;

@end

