/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIGestureRecognizer.h"
#import <Availability.h>

@class UIDelayedAction;

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {
	UIDelayedAction* _touchDelay;
}
-(void)clearTimer;
-(void)sendTouchesShouldBegin __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_NA, __MAC_NA, __IPHONE_3_0, __IPHONE_3_1);
-(void)sendTouchesShouldBeginForTouches:(id)sendTouches withEvent:(id)event __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
-(void)sendTouchesShouldBeginForDelayedTouches:(id)sendTouches __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
-(void)enoughTimeElapsed:(id)elapsed;
-(void)dealloc;
-(void)reset;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(BOOL)_shouldSaveGestureFromExclusion:(id)exclusion;
@end

