/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"

@class NSString;

@interface SBCallFailureAlert : SBAlert {
	int _causeCode;
	NSString* _address;
	int _uid;
	CTCallRef _call;
}
+(BOOL)shouldDisplayForCauseCode:(long)causeCode modemCauseCode:(long)code;
+(void)activateForCall:(CTCallRef)call causeCode:(long)code;
-(id)initWithCauseCode:(long)causeCode call:(CTCallRef)call;
-(void)activateWhenPossible;
-(long)causeCode;
-(CTCallRef)call;
-(id)callAddress;
-(int)addressBookUID;
-(void)setCallAddress:(id)address;
@end

