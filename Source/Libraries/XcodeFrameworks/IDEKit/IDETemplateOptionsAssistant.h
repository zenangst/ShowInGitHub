/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDETemplateInstantiationAssistant.h>

@class NSTextField, NSView;

@interface IDETemplateOptionsAssistant : IDETemplateInstantiationAssistant
{
    BOOL _canGoForward;
    NSView *_mainView;
    NSTextField *_firstTextField;
}

- (void)_setAccessibilityForCell:(id)arg1 withOption:(id)arg2 prefix:(id)arg3;
- (id)additionalOptions;
- (id)assistantTitle;
@property BOOL canGoForward; // @synthesize canGoForward=_canGoForward;
- (id)createControlForOption:(id)arg1;
- (id)createLabelForOption:(id)arg1;
@property NSTextField *firstTextField; // @synthesize firstTextField=_firstTextField;
- (void)loadView;
- (id)nextAssistantIdentifier;
- (id)optionsPersistanceDictionary;
- (double)requiredViewSpacingForOption:(id)arg1;
- (void)restoreSelectionFromUserDefaults;
- (void)setAssistantContext:(id)arg1;
- (void)setOptionsPersistanceDictionary:(id)arg1;
- (void)setupOptionViews;
- (void)updateOptions:(id)arg1;
- (void)viewDidInstall;
- (void)viewWillUninstall;
- (void)writeStateToUserDefaults;

@end

