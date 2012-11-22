/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SpringBoard-Structs.h"


@interface SBVoicemailManager : NSObject {
	XXStruct_EX3dgA _alertMark;
	XXStruct_EX3dgA _awayItemMark;
	BOOL _hasVisualVoicemail;
	int _visualVoicemailSubscriptionToken;
}
+(id)sharedInstance;
-(void)setHasVisualVoicemail:(BOOL)voicemail;
-(void)_updateVisualVoicemailState;
-(BOOL)_hasVisualVoicemail;
-(void)_mark:(XXStruct_EX3dgA*)mark;
-(void)markForAlerts;
-(void)markForAwayItems;
-(void)mark;
-(id)copyVisualVoicemailRecordsForAwayItems;
-(void)_presentAlertForRecord:(void*)record visualVoicemail:(BOOL)voicemail;
-(void)_handleVoicemailAvailableNotification:(id)notification;
-(void)_handleVoicemailStoreChangedNotification;
-(void)_handleVoicemailFallbackNotification;
@end

