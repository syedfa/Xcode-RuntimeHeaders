/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEQuickHelp/IDEQuickHelpController.h>

@class IDEQuickHelpQueryResult, NSString;

@interface IDEQuickHelpTextCompletionController : IDEQuickHelpController
{
}

- (void)showDefaultHelpMessage;
- (void)generateHTMLFromResult:(id)arg1;
- (id)sourceExpressionWindow;
- (void)closeQuickHelp;

// Remaining properties
@property(retain) IDEQuickHelpQueryResult *queryResult;
@property(retain) NSString *quickHelpContent;

@end

