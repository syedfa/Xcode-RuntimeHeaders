/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEComparisonEditor.h"

#import "DVTFindBarFindable-Protocol.h"
#import "IDEOpenQuicklyJumpToSupport-Protocol.h"

@class DVTSourceTextView, NSDictionary;

@interface IDESourceCodeComparisonEditor : IDEComparisonEditor <DVTFindBarFindable, IDEOpenQuicklyJumpToSupport>
{
    NSDictionary *_previouslyRestoredStateDictionary;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingKeyTextView;
- (void).cxx_destruct;
- (void)find:(id)arg1;
- (id)currentEditorContext;
- (id)documentLocationForOpenQuicklyQuery:(id)arg1;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
- (void)revertStateWithDictionary:(id)arg1;
- (void)restoreInternalComparisonDocumentLocationWithStateDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)setEditorSubmode:(int)arg1;
@property(readonly) DVTSourceTextView *keyTextView;
- (void)_updateViewBasedOnSubmode;
- (struct CGRect)overlayFrameForView:(id)arg1;
- (BOOL)pathCell:(id)arg1 shouldInitiallyShowMenuSearch:(id)arg2;
- (BOOL)pathCell:(id)arg1 shouldSeparateDisplayOfChildItemsForItem:(id)arg2;

@end

