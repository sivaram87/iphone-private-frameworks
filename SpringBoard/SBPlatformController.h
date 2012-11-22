/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBPlatformController.h"
#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SBPlatformController : NSObject {
	NSString* _currentConfigurationName;
	NSMutableDictionary* _currentConfiguration;
	NSMutableDictionary* _currentCapabilities;
}
+(id)sharedInstance;
-(id)systemBuildVersion;
-(id)infoForCapability:(id)capability;
-(void)setInfo:(id)info forCapability:(id)capability;
-(void)addCapabilities:(id)capabilities removeCapabilities:(id)capabilities2;
-(BOOL)hasCapability:(id)capability;
-(id)enabledCapabilities;
-(BOOL)hasRestriction:(id)restriction;
-(BOOL)canTakePhoto;
-(id)platformName;
-(id)iconState;
-(BOOL)matchesPlatforms:(id)platforms;
-(id)localizedPlatformName;
-(BOOL)isInternalInstall;
-(void)noteITunesStoreCapabilityChanged;
@end

@interface SBPlatformController (private)
-(id)currentConfigurationName;
-(void)postCurrentConfiguration;
-(void)_mergeDictionary:(id)dictionary intoDictionary:(id)dictionary2;
-(void)_addConfigurationNamed:(id)named toCompositeDictionary:(id)compositeDictionary;
-(BOOL)allowSensitiveUI:(BOOL)ui hasInternalBundle:(BOOL)bundle;
-(BOOL)isCarrierInstall:(BOOL)install hasInternalBundle:(BOOL)bundle;
-(id)_macAddress;
-(BOOL)allowYouTube;
-(BOOL)allowYouTubePlugin;
-(BOOL)allowWiFi;
-(void)discoverCurrentConfiguration;
-(CFBooleanRef)currentITunesStoreCapability;
-(void)noteConfigurationChanged:(id)changed;
@end

