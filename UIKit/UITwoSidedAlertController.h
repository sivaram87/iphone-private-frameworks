/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>

@class UIAlertView, UITwoSidedAlertController;
@protocol UITwoSidedAlertDelegate
@optional
-(void)twoSidedAlertControllerDidDismiss:(UITwoSidedAlertController*)ctrler;
@end

@interface UITwoSidedAlertController : NSObject {
	UIAlertView* _front;
	UIAlertView* _back;
	UIAlertView* _currentAlert;
	id _delegate;
}
-(void)setDelegate:(id<UITwoSidedAlertDelegate>)delegate;
-(UIAlertView*)frontAlert;
-(UIAlertView*)backAlert;
-(void)show;
-(void)dismiss;
-(void)flip;
@end


@interface UITwoSidedAlertController ()
-(void)dealloc;
-(id)createFrontAlert;
-(id)createBackAlert;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)frontAlertClickedButtonAtIndex:(int)index;
-(void)backAlertClickedButtonAtIndex:(int)index;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
-(void)alertViewCancel:(id)cancel;
@end

