/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IBDocumentMemberMutationDelegate <NSObject>
- (void)document:(id)arg1 relationshipKeyPath:(id)arg2 didChangeForMember:(id)arg3;
- (void)document:(id)arg1 didRemoveChildObject:(id)arg2 fromMember:(id)arg3;
- (void)document:(id)arg1 didAddChildObject:(id)arg2 toMember:(id)arg3;
- (void)document:(id)arg1 willRemoveChildObject:(id)arg2 fromMember:(id)arg3;
- (void)document:(id)arg1 willAddChildObject:(id)arg2 toMember:(id)arg3;
- (void)document:(id)arg1 willRemoveMember:(id)arg2;
@end

