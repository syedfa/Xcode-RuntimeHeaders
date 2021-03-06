/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCParsing/Declaration.h>

@class PropertyAttributesInfo;

@interface PropertyDeclaration : Declaration
{
    PropertyAttributesInfo *_attributesInfo;
}

@property(retain) PropertyAttributesInfo *attributesInfo; // @synthesize attributesInfo=_attributesInfo;
- (id)defaultSetterName;
- (id)setterNameLocation;
- (id)setterName;
- (id)defaultGetterName;
- (id)getterNameLocation;
- (id)getterName;
- (id)ivarName;
- (BOOL)isReadOnly;
- (BOOL)hasIvar;
- (id)initWithDeclName:(id)arg1 containingScope:(id)arg2;

@end

