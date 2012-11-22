/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSMutableSet, UIDelayedAction, NSArray;
@protocol UILongPressGestureRecognizerDelegate;

@interface UILongPressGestureRecognizer : UIGestureRecognizer {
	NSArray* _touches;
	NSMutableSet* _activeTouches;
	BOOL _gotTouchEnd;
	BOOL _gotTooMany;
	int _numberOfFingers;
	double _delay;
	float _allowableMovement;
	CGPoint _startPointScreen;
	UIDelayedAction* _enoughTimeElapsed;
	id<UILongPressGestureRecognizerDelegate> _delegate;
}
@property(retain, nonatomic) NSArray* touches;
@property(assign, nonatomic) int numberOfFingers;
@property(assign, nonatomic) double delay;
@property(assign, nonatomic) float allowableMovement;
@property(assign, nonatomic) id<UILongPressGestureRecognizerDelegate> delegate;
@property(readonly, assign, nonatomic) CGPoint centroid;
@property(readonly, assign, nonatomic) CGPoint startPoint;
-(id)initWithTarget:(id)target action:(SEL)action;
-(void)dealloc;
-(void)reset;
-(void)enoughTimeElapsed:(id)elapsed;
-(void)clearTimer;
-(void)startTimer;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(CGPoint)centroidScreen;
@end

