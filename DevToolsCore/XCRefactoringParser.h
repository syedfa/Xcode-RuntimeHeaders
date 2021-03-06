/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "EntireProject.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, XCRefactoringTransformation;

@interface XCRefactoringParser : EntireProject
{
    XCRefactoringTransformation *_transformation;
    NSMutableSet *_compilationUnitsParsed;
    NSDictionary *_buildSettings;
    NSMutableDictionary *_editorCache;
}

- (id)getStringAtFile:(id)arg1 line:(unsigned long long)arg2;
- (id)getStringAtLocation:(id)arg1 replacing:(id)arg2;
- (id)getStringAtLocation:(id)arg1;
- (id)memorySourceForFile:(const char *)arg1;
- (BOOL)beginHeader:(id)arg1;
- (BOOL)parseCompilationUnitsAndSettings:(id)arg1;
- (BOOL)parseOneCompilationUnit:(id)arg1 buildSettings:(id)arg2;
- (void *)inputStreamForCompilationUnit:(id)arg1;
- (unsigned long long)fileLanguage;
- (BOOL)shouldRegisterStandardIncludes;
- (id)undefinedMacroNames;
- (id)predefinedMacroNamesAndDefs;
- (id)preincludeFiles;
- (id)frameworkSearchPaths;
- (id)systemIncludePaths;
- (void)fakeCriticalDefinesForLanguage;
- (void)releaseCompileResources;
- (void)setupCompileResources;
- (void)dealloc;
- (void)finalize;
- (id)initWithProject:(id)arg1 transformation:(id)arg2;
- (struct RefactoringCppActions *)cppCallbackFactory;

@end

