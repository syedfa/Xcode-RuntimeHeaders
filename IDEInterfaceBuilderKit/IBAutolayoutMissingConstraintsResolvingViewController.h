/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBAutolayoutIssueResolvingViewController.h>

@class IBDocument, NSString;

@interface IBAutolayoutMissingConstraintsResolvingViewController : IBAutolayoutIssueResolvingViewController
{
    id <IBCollection> _views;
    IBDocument *_document;
    NSString *_descriptionText;
}

@property(readonly, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, nonatomic) IBDocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) id <IBCollection> views; // @synthesize views=_views;
- (void).cxx_destruct;
- (void)confirmChanges;
- (id)initWithViews:(id)arg1 document:(id)arg2;

@end

