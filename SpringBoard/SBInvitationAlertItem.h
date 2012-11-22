/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlertItem.h"

@class NSString;

@interface SBInvitationAlertItem : SBAlertItem {
	NSString* _title;
	NSString* _organizer;
	double _startDate;
	double _endDate;
	int _eventId;
	BOOL _allDay;
	BOOL _floats;
	int _count;
	int _status;
}
+(id)activeInvitationAlertItems;
+(void)_addActiveItem:(id)item;
+(void)_removeActiveItem:(id)item;
+(void)registerForAlerts;
+(void)_significantTimeChange;
+(CFDateFormatterRef)_customFormatter;
-(id)initWithCount:(int)count;
-(id)initWithTitle:(id)title organizerName:(id)name startDate:(double)date endDate:(double)date4 floats:(BOOL)floats allDay:(BOOL)day eventId:(int)anId status:(int)status;
-(int)eventId;
-(int)count;
-(int)status;
-(id)_stringForTime:(XXStruct_fhKmAA)time;
-(id)_stringForDateTime:(XXStruct_fhKmAA)dateTime timeZone:(CFTimeZoneRef)zone;
-(id)_dateString;
-(void)didPresentAlertSheet:(id)sheet;
-(void)revealEvent;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
@end

