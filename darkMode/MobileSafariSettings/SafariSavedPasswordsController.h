/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariAutoFillListController.h>
#import <libobjc.A.dylib/PSListControllerURLHandler.h>
#import <libobjc.A.dylib/_SFEditablePasswordTableViewControllerDelegate.h>
#import <libobjc.A.dylib/_SFSettingsAuthenticationRequiring.h>

@class NSString, _SFEditablePasswordTableViewController, NSDictionary, _SFSiteMetadataManager, WBSAutoFillQuirksManager, _UIContentUnavailableView, UIViewController, _SFPasswordManagerLockedView;

@interface SafariSavedPasswordsController : SafariAutoFillListController <PSListControllerURLHandler, _SFEditablePasswordTableViewControllerDelegate, _SFSettingsAuthenticationRequiring> {

	_SFEditablePasswordTableViewController* _editablePasswordTableViewController;
	NSDictionary* _initialResourceDictionary;
	_SFSiteMetadataManager* _siteMetadataManager;
	WBSAutoFillQuirksManager* _autoFillQuirksManager;
	_UIContentUnavailableView* _contentUnavailableView;
	UIViewController* _lockedTopViewController;
	_SFPasswordManagerLockedView* _passwordManagerLockedView;
	NSString* _lockedViewControllerTitle;
	BOOL _hasBeenAuthenticated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * authenticationPrompt; 
@property (nonatomic,readonly) BOOL showsAuthenticationPromptAsTitle; 
@property (assign,nonatomic) BOOL hasBeenAuthenticated;                            //@synthesize hasBeenAuthenticated=_hasBeenAuthenticated - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)dealloc;
-(void)hideContentUnavailableViewForEditablePasswordTableViewController:(id)arg1 ;
-(void)editablePasswordTableViewController:(id)arg1 showContentUnavailableViewForSearchQuery:(id)arg2 ;
-(BOOL)editablePasswordTableViewControllerShouldShowAutoFillItem:(id)arg1 ;
-(BOOL)editablePasswordTableViewControllerShouldShowSecurityRecommendationsItem:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)handleAutoFillDrillInForEditablePasswordTableViewController:(id)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)handleResourceDictionaryWhenAlreadyPresented:(id)arg1 ;
-(void)setHasBeenAuthenticated:(BOOL)arg1 ;
-(BOOL)hasBeenAuthenticated;
-(BOOL)showsAuthenticationPromptAsTitle;
-(NSString *)authenticationPrompt;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_applicationDidEnterForeground:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)_setUpAutoFillQuirksManager;
-(void)_authenticateSoon;
-(void)_processInitialResourceDictionary;
@end

