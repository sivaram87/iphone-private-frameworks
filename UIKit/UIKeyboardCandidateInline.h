/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateList.h"
#import <UIKit/UIView.h>

@class UILabel, UIScroller, NSMutableArray, UIImage, NSArray, UIKeyboardCandidateSafetyNetVie, NSTimer, UIKeyboardGenericKeyView, UIImageView, NSString, UIAutocorrectInlinePrompt;

@interface UIKeyboardCandidateInline : UIView <UIKeyboardCandidateList> {
	id _delegate;
	NSArray* _candidates;
	unsigned _currentCandidateIndex;
	unsigned _numCandidates;
	unsigned _currentPageIndex;
	int _promptTextType;
	UILabel* _inlineTextLabel;
	NSString* _inlineText;
	CGRect _inlineRect;
	CGRect _frame;
	unsigned _lineHeight;
	unsigned _numColumns;
	BOOL _alwaysShowBackground;
	BOOL _showControls;
	BOOL _showingAll;
	BOOL _selectedInAll;
	NSMutableArray* _candidateLines;
	UIAutocorrectInlinePrompt* _inlineView;
	UIScroller* _scrollView;
	UIImageView* _controlsView;
	UIKeyboardGenericKeyView* _subviewButton;
	UIKeyboardGenericKeyView* _nextPageButton;
	UIKeyboardGenericKeyView* _prevPageButton;
	CGRect _inlineCandidateFrame;
	float _lazyLayoutNextOriginY;
	unsigned _lazyLayoutNextCandidateIndex;
	int _orientation;
	BOOL _forMobileNotes;
	BOOL _landscape;
	BOOL _animating;
	CGRect _windowFrame;
	CGPoint _draggingStartOffset;
	UIImageView* _closeButton;
	UIImage* _backgroundImage;
	UIImage* _backgroundTopImage;
	CGRect _closeButtonFrame;
	BOOL _showScroller;
	NSTimer* _deferredLayoutTimer;
	UIView* _shadowView;
	BOOL _caretVisible;
	BOOL _caretblinking;
	CGRect m_caretRect;
	UIView* m_caretView;
	NSTimer* m_caretTimer;
	BOOL m_caretShowingNow;
	BOOL m_showingCompletions;
	UIKeyboardCandidateSafetyNetVie* m_landscapeSafetyNetView;
}
+(id)sharedInstance;
+(void)releaseSharedInstance;
-(id)initWithFrame:(CGRect)frame;
-(id)rotatingContentViewForWindow:(id)window;
-(void)adjustForFrame:(CGRect)frame orientation:(int)orientation;
-(int)orientation;
-(void)mouseDown:(GSEventRef)down;
-(void)mouseUp:(GSEventRef)up;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(BOOL)ignoresMouseEvents;
-(void)dealloc;
-(void)candidateAcceptedAtIndex:(unsigned)index;
-(void)drawRect:(CGRect)rect;
-(void)_setInlineText:(id)text;
-(void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;
-(void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;
-(void)obsoleteCandidates;
-(void)setCompletionContext:(id)context;
-(void)showCandidateAtIndex:(unsigned)index;
-(void)showPageAtIndex:(unsigned)index;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)setUIKeyboardCandidateListDelegate:(id)delegate;
-(void)showNextCandidate;
-(id)currentCandidate;
-(unsigned)currentIndex;
-(id)candidateAtIndex:(unsigned)index;
-(void)setCurrentIndex:(unsigned)index;
-(unsigned)count;
-(void)configureKeyboard:(id)keyboard;
-(void)setAlwaysShowBackground:(BOOL)background;
-(void)setShowControls:(BOOL)controls;
-(void)inlineCandidateClicked:(id)clicked;
-(void)candidateListAcceptCandidate:(id)candidate;
-(void)cellSelected:(id)selected;
-(void)cancelButtonSelected:(id)selected;
-(void)prevPageButtonSelected:(id)selected;
-(void)nextPageButtonSelected:(id)selected;
-(void)layout;
-(void)layoutOneCandidateAtIndex:(unsigned)index;
-(void)clearLayout;
-(void)_clearInlineCandidate;
-(void)_fadeInlineCandidate;
-(void)_animateInlineCandidate;
-(void)_adjustFrameSizeForCandidateLines:(int)candidateLines;
-(void)inlineCandidateAnimationDidStop:(id)inlineCandidateAnimation finished:(id)finished context:(void*)context;
-(void)_showBackground;
-(void)autocorrectionAnimationDidStop:(id)autocorrectionAnimation finished:(id)finished context:(void*)context;
-(BOOL)scroller:(id)scroller shouldAdjustSmoothScrollEndForVelocity:(CGSize)velocity;
-(CGPoint)scroller:(id)scroller adjustSmoothScrollEnd:(CGPoint)end velocity:(CGSize)velocity;
-(void)scrollerWillStartDragging:(id)scroller;
-(void)scrollerDidEndDragging:(id)scroller willSmoothScroll:(BOOL)scroll;
-(void)scrollerDidEndAnimatedScrolling:(id)scroller;
-(void)installLandscapeSafetyNetView;
-(void)removeLandscapeSafetyNetView;
-(void)_startBackgroundLayoutIfNeeded;
-(void)_stopBackgroundLayout;
-(void)_hideBackground;
-(void)_periodicLayoutNextPage:(id)page;
-(BOOL)_layoutNextLine;
-(BOOL)needsWebDocumentViewEventsDirectly;
-(void)setCaretPosition:(CGRect)position;
-(void)showCaret:(BOOL)caret gradually:(BOOL)gradually;
-(int)textEffectsVisibilityLevel;
@end

