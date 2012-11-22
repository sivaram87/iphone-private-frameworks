/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSTimer, NSMutableArray;

@interface SBAlertItemsController : NSObject {
	NSMutableArray* _lockedAlertItems;
	NSMutableArray* _unlockedAlertItems;
	NSTimer* _autoDismissTimer;
}
+(id)sharedInstance;
-(void)convertAnimatingUnlockedAlertsToLockedAlerts;
-(void)deactivateAllAlertItems;
-(void)resetAutoDismissTimer;
-(void)activateAlertItem:(id)item;
-(void)deactivateAlertItem:(id)item reason:(int)reason;
-(void)deactivateAlertItem:(id)item;
-(void)deactivateAlertItemsOfClass:(Class)aClass;
-(void)deactivateAlertItemsOfClass:(Class)aClass reason:(int)reason;
-(void)deactivateAlertItemsUsingSelector:(SEL)selector reason:(int)reason;
-(void)autoDismissAlertItem:(id)item;
-(id)alertItemOfClass:(Class)aClass;
-(BOOL)isShowingAlertOfClass:(Class)aClass;
-(BOOL)isShowingAlert:(id)alert;
-(BOOL)isShowingAlerts;
-(id)visibleAlertItem;
-(BOOL)deactivateAlertForMenuClick;
-(id)deactivateAlertItemsForLock;
-(BOOL)dontLockOverAlertItems;
-(void)deactivateAlertItemsForAlertActivation;
-(void)noteVolumeOrLockPressedOverLockedAlerts;
@end

