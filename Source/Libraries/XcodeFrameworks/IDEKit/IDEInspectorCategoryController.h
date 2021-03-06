/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTExtension, NSArray;

@interface IDEInspectorCategoryController : NSObject
{
    DVTExtension *_category;
    NSArray *_inspectorExtensions;
}

- (id)_inspectorExtensions;
- (id)_typeMatchedInspectorsForTypeIdentifier:(id)arg1;
@property(readonly) DVTExtension *category; // @synthesize category=_category;
- (id)extensionMatchedInspectorsForInspectedNavigables:(id)arg1 withWorkspaceDocument:(id)arg2;
- (id)initWithCategoryExtension:(id)arg1;
- (id)inspectorsForInspectedNavigables:(id)arg1 withWorkspaceDocument:(id)arg2;
- (BOOL)inspectsEditorContent;
- (id)navigableItemsForInputNavigableItems:(id)arg1;
- (id)placeholderStringForInputNavigableItems:(id)arg1 derivedItems:(id)arg2;
- (id)presentationOrderForInspectors:(id)arg1;
- (id)representedObjectMatchedInspectors:(id)arg1 navigables:(id)arg2;
@property(readonly) BOOL supportsDocumentUndo;

@end

