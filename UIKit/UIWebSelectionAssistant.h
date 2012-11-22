/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>

@class UIWebDocumentView, UIWebSelectionView, UIWebSelection;

@interface UIWebSelectionAssistant : NSObject {
	UIWebDocumentView* _webView;
	UIWebSelectionView* _tintView;
	BOOL _enabled;
}
@property(assign, nonatomic) BOOL enabled;
@property(readonly, assign, nonatomic) CGRect selectionFrame;
@property(readonly, assign, nonatomic) UIWebSelection* selection;
-(id)initWithWebView:(id)webView;
-(void)dealloc;
-(void)setGestureRecognizers;
-(void)selectionChanged;
-(void)longPress:(id)press;
-(void)tap:(id)tap;
-(void)scaleChanged;
-(id)hitTest:(CGPoint)test withEvent:(id)event fromView:(id)view;
-(void)willDrag;
-(void)doneDragging;
-(void)resignedFirstResponder;
-(void)hideCallout;
-(void)layoutChanged;
-(void)willRotate:(id)rotate;
-(void)didRotate:(id)rotate;
@end

