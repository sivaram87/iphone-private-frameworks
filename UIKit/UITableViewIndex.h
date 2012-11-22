/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UIControl.h>
#import "UIKit-Structs.h"
#import "UITableViewIndex.h"

@class NSString, NSArray, UIFont;

@interface UITableViewIndex : UIControl {
	NSArray* _titles;
	UIFont* _font;
	int _selectedSection;
	BOOL _pastTop;
	BOOL _pastBottom;
	CGSize _cachedSize;
	CGSize _cachedSizeToFit;
}
@property(readonly, assign, nonatomic) int selectedSection;
@property(readonly, assign, nonatomic) BOOL pastTop;
@property(readonly, assign, nonatomic) BOOL pastBottom;
@property(readonly, assign, nonatomic) NSString* selectedSectionTitle;
@property(retain, nonatomic) UIFont* font;
@property(retain, nonatomic) NSArray* titles;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)fits;
-(unsigned)maximumNumberOfTitlesWithoutTruncationForHeight:(float)height;
-(void)drawRect:(CGRect)rect;
-(void)_selectSectionForTouch:(id)touch withEvent:(id)event;
-(BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;
-(BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)endTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)cancelTrackingWithEvent:(id)event;
-(id)_createTouchesWithMouseEvent:(GSEventRef)mouseEvent phase:(int)phase;
-(void)mouseDown:(GSEventRef)down;
-(void)mouseDragged:(GSEventRef)dragged;
-(void)mouseUp:(GSEventRef)up;
@end

@interface UITableViewIndex (UITableViewIndexInternal)
-(id)_displayTitles;
@end

