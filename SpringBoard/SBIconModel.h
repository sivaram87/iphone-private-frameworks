/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SBButtonBar, NSString, NSSet, NSMutableArray, NSDictionary;

@interface SBIconModel : NSObject {
	NSString* _iconCachePath;
	NSString* _smallIconCachePath;
	NSDictionary* _previousIconState;
	NSMutableArray* _iconLists;
	SBButtonBar* _buttonBar;
	NSMutableDictionary* _allIcons;
	NSSet* _hiddenIconTags;
	NSSet* _visibleIconTags;
}
+(id)sharedInstance;
+(int)maxIconListCount;
+(void)purgeIconCaches;
// inherited: -(id)init;
// inherited: -(void)dealloc;
-(void)localeChanged;
-(void)setVisibilityOfIconsWithVisibleTags:(id)visibleTags hiddenTags:(id)tags;
-(BOOL)isIconVisible:(id)visible;
-(void)replaceDownloadingDisplayIdentifiers:(id)identifiers withDisplayIdentifiers:(id)displayIdentifiers;
-(void)_completedUninstall:(id)uninstall;
-(id)addDownloadingIconForDownload:(id)download;
-(id)addDownloadingIconForDisplayIdentifier:(id)displayIdentifier;
-(id)addSpotlightIconForDisplayIdentifier:(id)displayIdentifier spotlightCategory:(id)category iconName:(id)name;
-(void)removeAppForDownloadingIcon:(id)downloadingIcon;
-(id)addBookmarkIconForWebClip:(id)webClip;
-(void)reloadIconImage:(id)image;
-(void)reloadIconImageForDisplayIdentifier:(id)displayIdentifier;
-(id)pathForCachedIconData:(id)cachedIconData smallIcon:(BOOL)icon;
-(void)cacheImagesForIcon:(id)icon;
-(void)_cacheImagesForIcon:(id)icon smallIcon:(BOOL)icon2;
-(id)getCachedImagedForIcon:(id)icon smallIcon:(BOOL)icon2;
-(id)_imageForDataAtPath:(id)path width:(unsigned)width height:(unsigned)height;
-(void)_purgeOrphanedImages;
-(void)addIconForApplication:(id)application;
-(void)loadAllIcons;
-(id)visibleIconIdentifiers;
-(id)allIcons;
-(id)iconForDisplayIdentifier:(id)displayIdentifier;
-(id)iconForDisplayIdentifier:(id)displayIdentifier andSpotlightCategory:(id)category;
-(id)iconState;
-(id)_iconState;
-(void)noteIconStateChangedExternally;
-(id)buttonBar;
-(id)iconLists;
-(int)indexOfIconList:(id)iconList;
-(void)createIconLists;
-(void)uninstallBookmarkIcon:(id)icon;
-(id)iconListContainingIcon:(id)icon;
-(id)iconListContainingIconWithDisplayIdentifier:(id)displayIdentifier;
-(id)addEmptyIconList;
-(void)removeEmptyIconList:(id)list;
-(void)compactIconLists;
-(id)firstAvailableIconListX:(int*)x Y:(int*)y;
-(BOOL)iconPositionInPlatformState:(id)platformState X:(int*)x Y:(int*)y inIconListNumber:(int*)iconListNumber;
-(void)clearPreviousIconState;
-(void)addNewIconToDesignatedLocation:(id)designatedLocation animate:(BOOL)animate scrollToList:(BOOL)list saveIconState:(BOOL)state;
-(void)_addNewIconToDesignatedLocation:(id)designatedLocation animate:(BOOL)animate scrollToList:(BOOL)list saveIconState:(BOOL)state;
-(BOOL)_iconListsAreDirty;
-(void)deleteIconState;
-(void)_writeIconState;
-(void)saveIconState;
-(void)_replaceAppIconsWithDownloadingIcons;
-(void)_replaceAppIconWithDownloadingIcon:(id)downloadingIcon sourceList:(id)list;
-(void)relayout;
-(void)uninstallApplicationIcon:(id)icon;
-(id)exportState;
-(id)_arrayForIconList:(id)iconList;
-(id)_dictionaryForIcon:(id)icon;
-(BOOL)importState:(id)state;
@end

