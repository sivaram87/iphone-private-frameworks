/**
 * This header is generated by class-dump-z 0.1-11q.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>
#import "Preferences-Structs.h"


@interface PSSystemConfiguration : NSObject {
	SCPreferencesRef _prefs;
}
+(id)sharedInstance;
+(void)releaseSharedInstance;
-(unsigned char)lockAndSynchronize;
-(CFStringRef)dataServiceID;
-(CFStringRef)voicemailServiceID;
-(CFStringRef)getServiceIDForPDPContext:(unsigned)pdpcontext;
-(id)interfaceConfigurationValueForKey:(CFStringRef)key serviceID:(CFStringRef)id;
-(void)setInterfaceConfigurationValue:(id)value forKey:(CFStringRef)key serviceID:(CFStringRef)id;
-(id)protocolConfiguration:(CFStringRef)configuration serviceID:(CFStringRef)id;
-(void)setProtocolConfiguration:(id)configuration protocolType:(CFStringRef)type serviceID:(CFStringRef)id;
-(id)protocolConfigurationValueForKey:(CFStringRef)key protocolType:(CFStringRef)type serviceID:(CFStringRef)id;
-(void)setProtocolConfigurationValue:(id)value forKey:(CFStringRef)key protocolType:(CFStringRef)type serviceID:(CFStringRef)id;
@end

