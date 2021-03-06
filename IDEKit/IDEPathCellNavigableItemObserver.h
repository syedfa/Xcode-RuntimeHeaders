/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTHashTable, DVTStackBacktrace, IDEPathCell, NSSet;

@interface IDEPathCellNavigableItemObserver : NSObject <DVTInvalidation>
{
    IDEPathCell *_owner;
    DVTHashTable *_observedItems;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tearDownObservingForItems:(id)arg1;
- (void)setupObservingForItems:(id)arg1;
@property(readonly) NSSet *observedItems;
- (void)primitiveInvalidate;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

