/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEEditorDocument.h"

#import "IDEDocumentStructureProviding-Protocol.h"

@class DYCaptureSessionInfo, GPUDebuggerController, GPUDebuggingAdditionUIController, GPUTraceOutline, GPUTraceSession, NSArray;

@interface GPUTraceDocument : IDEEditorDocument <IDEDocumentStructureProviding>
{
    GPUTraceOutline *_outline;
    GPUTraceSession *_traceSession;
    GPUDebuggingAdditionUIController *_debuggingAdditionUIController;
    GPUDebuggerController *_debuggerController;
    BOOL _editorWasInstalled;
}

+ (BOOL)preservesVersions;
+ (BOOL)autosavesInPlace;
@property(nonatomic) BOOL editorWasInstalled; // @synthesize editorWasInstalled=_editorWasInstalled;
@property(retain, nonatomic) GPUDebuggingAdditionUIController *debuggingAdditionUIController; // @synthesize debuggingAdditionUIController=_debuggingAdditionUIController;
@property(retain, nonatomic) GPUTraceSession *traceSession; // @synthesize traceSession=_traceSession;
@property(readonly, nonatomic) GPUTraceOutline *outline; // @synthesize outline=_outline;
- (void).cxx_destruct;
- (id)sourceLocationForDocumentLocation:(id)arg1;
- (id)boundResourcesGeniusLocationsForDocumentLocation:(id)arg1;
- (id)allResourcesGeniusLocationsForDocumentLocation:(id)arg1;
@property(readonly) NSArray *ideTopLevelStructureObjects;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (void)editorDocumentDidClose;
- (void)editorDocumentWillClose;
- (BOOL)prepareSavePanel:(id)arg1;
- (id)backupFileURL;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (id)fileWrapperOfType:(id)arg1 error:(id *)arg2;
- (BOOL)canExportDocument;
- (BOOL)validateUserInterfaceItem:(id)arg1;
@property(readonly, nonatomic) DYCaptureSessionInfo *captureSessionInfo; // @dynamic captureSessionInfo;
- (id)captureArchive;
- (void)dealloc;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;

@end

