/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IBICSchemaProvider-Protocol.h"

@class IBICIdiom, IBICPlatform, IBICScale;

@interface IBICBaseSchemaProvider : NSObject <IBICSchemaProvider>
{
    IBICPlatform *_universalPlatform;
    IBICIdiom *_universalIdiom;
    IBICScale *_oneXScale;
    IBICScale *_twoXScale;
}

- (void).cxx_destruct;
- (void)registerBaseImageSetSlots:(id)arg1;
- (void)registerBaseSlotComponents:(id)arg1;
- (void)registerSchemaComponents:(id)arg1;
- (double)precedence;

@end
