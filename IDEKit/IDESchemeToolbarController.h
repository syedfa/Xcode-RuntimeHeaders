/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTToolbarViewController.h"

#import "IDEPathCellDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSPathControlDelegate-Protocol.h"

@class IDENavigableItem, IDENavigableItemCoordinator, IDEPathControl, NSToolbarItem;

@interface IDESchemeToolbarController : DVTToolbarViewController <NSPathControlDelegate, IDEPathCellDelegate, NSMenuDelegate>
{
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    IDENavigableItem *_rootNavigable;
    IDEPathControl *_pathControl;
    unsigned long long _menusOpen;
    NSToolbarItem *_toolbarItem;
}

+ (id)keyPathsForValuesAffectingSelectedNavigable;
+ (id)keyPathsForValuesAffectingPathControlIsEnabled;
@property(nonatomic) __weak NSToolbarItem *toolbarItem; // @synthesize toolbarItem=_toolbarItem;
@property(retain) IDENavigableItem *rootNavigable; // @synthesize rootNavigable=_rootNavigable;
- (void).cxx_destruct;
- (void)_newContextAction:(id)arg1;
- (void)_manageContextsAction:(id)arg1;
- (void)_editActiveContextAction:(id)arg1;
- (void)_noSchemeAction:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)pathCell:(id)arg1 titleForPathComponentCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)pathCell:(id)arg1 accessibilityDescriptionForPathComponentCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)pathCellNoSelectionTitle;
- (void)updatePathControlSize;
- (void)pathCell:(id)arg1 didUpdateMenu:(id)arg2;
- (struct CGPoint)pathCell:(id)arg1 adjustPopupMenuLocation:(struct CGPoint)arg2;
- (BOOL)pathCell:(id)arg1 shouldSeparateDisplayOfChildItemsForItem:(id)arg2;
- (void)didUpdateRunDestinationMenu:(id)arg1;
- (void)didUpdateSchemeMenu:(id)arg1;
@property(retain) IDENavigableItem *selectedNavigable;
- (struct CGSize)maxSize;
- (struct CGSize)minSize;
- (void)_windowWillClose:(id)arg1;
- (BOOL)pathControlIsEnabled;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)initWithToolbarItemIdentifier:(id)arg1 window:(id)arg2;
- (id)_workspaceTabController;
- (id)_workspace;

@end

