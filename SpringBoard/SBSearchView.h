/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class UISearchBar, UITableView, SBRoundedCornerView, UILabel, UIKeyboard;

@interface SBSearchView : UIView {
	SBRoundedCornerView* _roundedCornerView;
	UISearchBar* _searchBar;
	UITableView* _tableView;
	UIKeyboard* _keyboard;
	UILabel* _noResultsLabel;
	BOOL _isKeyboardVisible;
	BOOL _inAnimationBlock;
	BOOL _showSearchKeyWhenAnimatingKeyboard;
}
@property(readonly, assign, nonatomic) UISearchBar* searchBar;
@property(readonly, assign, nonatomic) UITableView* tableView;
// inherited: -(id)initWithFrame:(CGRect)frame;
-(BOOL)_initializeKeyboardIfNotBricked;
// inherited: -(void)dealloc;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)frame;
-(void)layoutCornerView;
-(float)_footerHeight;
-(void)layoutFooterView;
-(BOOL)isKeyboardVisible;
-(void)setShowsKeyboard:(BOOL)keyboard animated:(BOOL)animated;
-(void)keyboardAnimationDidStop:(id)keyboardAnimation finished:(id)finished context:(void*)context;
-(void)_fixUpRespondersAndPreheat;
-(void)setShowingNoResultsText:(BOOL)text;
-(void)setShowsSearchKeyWhenAnimatingKeyboard:(BOOL)keyboard;
-(void)_setDistantContentViewTransform;
-(void)scatter:(BOOL)scatter startTime:(double)time;
-(void)scatterAnimationDidStop;
-(void)unscatter:(BOOL)unscatter startTime:(double)time;
-(void)unscatterAnimationDidStop;
@end

