/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBStatusBarContentView.h"


@interface SBStatusBarBatteryView : SBStatusBarContentView {
	int _batteryCapacity;
	float _curvedCapacity;
	BOOL _batteryCharging;
	BOOL _isOnAC;
	BOOL _showBatteryView;
}
-(void)updateBattery;
-(void)_batteryStatusChanged:(id)changed;
-(void)drawRect:(CGRect)rect;
@end

