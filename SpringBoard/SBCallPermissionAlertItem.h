/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class NSURL;

@interface SBCallPermissionAlertItem : SBAlertItem {
	NSURL* _url;
}
-(id)initWithURL:(id)url;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
@end

