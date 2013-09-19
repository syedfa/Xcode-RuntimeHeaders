/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface IDEFileInspectorFileTypeGroup : NSObject
{
    NSString *_displayName;
    NSArray *_fileDataTypes;
}

+ (id)allDisplayedEntries;
+ (id)folderGroups;
+ (id)fileGroups;
+ (id)groupsByFilteringFileDataTypes:(id)arg1;
+ (id)allGroups;
+ (id)fileDataTypesPerGroupID;
+ (id)groupExtensionPoint;
+ (id)groupEntryExtensionPoint;
@property(readonly) NSArray *fileDataTypes; // @synthesize fileDataTypes=_fileDataTypes;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDisplayName:(id)arg1 fileDataTypes:(id)arg2;

@end
