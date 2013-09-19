/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSButton.h"

@class NSEvent;

@interface DVTWindowProxyDragButton : NSButton
{
    struct {
        unsigned int waitForDrag:1;
        unsigned int currentlyDragging:1;
        unsigned int shouldDrag:1;
        unsigned int RESERVED:29;
    } _wpdbFlags;
    NSEvent *_mouseDownEvent;
    id _representedURLBlock;
    id _representedDocumentBlock;
}

+ (void)initialize;
@property(copy) id representedDocumentBlock; // @synthesize representedDocumentBlock=_representedDocumentBlock;
@property(copy, nonatomic) id representedURLBlock; // @synthesize representedURLBlock=_representedURLBlock;
- (void).cxx_destruct;
- (void)pathCellClicked:(id)arg1;
- (void)showPopUp;
- (struct CGPoint)menuLocation;
- (Class)menuClass;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)_showDragError:(int)arg1 forFilename:(id)arg2;
- (void)_dragFile:(id)arg1 fromRect:(struct CGRect)arg2 slideBack:(BOOL)arg3 event:(id)arg4;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;

@end
