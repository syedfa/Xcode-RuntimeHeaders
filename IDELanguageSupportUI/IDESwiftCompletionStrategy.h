/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTTextCompletionStrategy.h"

@interface IDESwiftCompletionStrategy : DVTTextCompletionStrategy
{
}

+ (void)initialize;
- (id)bestMatchForPrefix:(id)arg1 inCompletionItems:(id)arg2 withContext:(id)arg3;
- (id)_buildSettingsForDocument:(id)arg1 index:(id)arg2;
- (id)_buildSettingsFromDictionary:(id)arg1;
- (id)completionItemsForDocumentLocation:(id)arg1 context:(id)arg2 highlyLikelyCompletionItems:(id *)arg3 areDefinitive:(char *)arg4;
- (void)prepareForDocumentLocation:(id)arg1 context:(id)arg2;
- (id)init;

@end
