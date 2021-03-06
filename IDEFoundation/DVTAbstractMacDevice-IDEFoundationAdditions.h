/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTAbstractMacDevice.h"

@interface DVTAbstractMacDevice (IDEFoundationAdditions)
- (BOOL)supportsRunningExecutableAtPath:(id)arg1 usingArchitecture:(id)arg2 error:(id *)arg3;
- (BOOL)supportsExecutionForArchitecture:(id)arg1 launchSession:(id)arg2 error:(id *)arg3;
- (id)deviceSpecificOverridingPropertiesForBuildable:(id)arg1 withBaselineParameters:(id)arg2;
- (id)supportedSDKsForBuildable:(id)arg1 withConfiguration:(id)arg2 workspaceArena:(id)arg3;
- (id)supportedArchitecturesForBuildable:(id)arg1 withConfiguration:(id)arg2 workspaceArena:(id)arg3;
- (BOOL)canBeDefaultDeviceForBuildable:(id)arg1 withConfiguration:(id)arg2;
@end

