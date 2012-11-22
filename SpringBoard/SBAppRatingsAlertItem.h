/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"
#import "UIModalViewDelegate.h"

@class SBInstalledApplicationIcon, UIPushButton;

@interface SBAppRatingsAlertItem : SBAlertItem <UIModalViewDelegate> {
	SBInstalledApplicationIcon* _icon;
	UIPushButton* _rateButton;
	BOOL _uninstallOnDismiss;
}
-(id)initWithIcon:(id)icon uninstallOnDismiss:(BOOL)dismiss;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
-(void)_starsControlValueChanged:(id)changed;
@end

