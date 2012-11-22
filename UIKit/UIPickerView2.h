/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "NSCoding.h"
#import <UIKit/UIPickerView.h>
#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol UIPickerViewDelegate, UIPickerViewDataSource;

@interface UIPickerView ()
+(CGSize)defaultSizeForCurrentOrientation;
-(CGSize)defaultSize;
-(BOOL)_isLandscapeOrientation;
-(float)_tableRowHeight;
-(id)_orientationImageSuffix;
-(void)setSoundsEnabled:(BOOL)enabled;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithCoder:(id)coder;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(void)setNeedsLayout;
-(void)_updateSound;
-(void)setHidden:(BOOL)hidden;
-(void)setAlpha:(float)alpha;
-(void)didMoveToWindow;
-(void)reload;
-(void)reloadData;
-(void)reloadAllComponents;
-(void)reloadDataForColumn:(int)column;
-(void)reloadComponent:(int)component;
-(id)pickerImageNamePrefix;
-(id)_selectionBarSuffix;
-(id)imageForPickerPiece:(int)pickerPiece;
-(CGRect)_selectionBarRectForHeight:(float)height;
-(id)_createViewForPickerPiece:(int)pickerPiece;
-(id)createDividerWithFrame:(CGRect)frame;
-(CGSize)sizeThatFits:(CGSize)fits;
-(double)scrollAnimationDuration;
-(int)_delegateNumberOfComponents;
-(int)_delegateNumberOfRowsInComponent:(int)component;
-(id)_delegateTitleForRow:(int)row forComponent:(int)component;
-(float)_delegateWidthForComponent:(int)component ofCount:(int)count withSizeLeft:(float)sizeLeft;
-(float)_delegateRowHeightForComponent:(int)component;
-(id)_createTableWithFrame:(CGRect)frame forComponent:(int)component;
-(CGSize)rowSizeForComponent:(int)component;
-(int)numberOfRowsInComponent:(int)component;
-(int)numberOfRowsInColumn:(int)column;
-(int)numberOfColumns;
-(void)reloadAllPickerPieces;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)frame;
-(int)numberOfRowsInTable:(id)table;
-(BOOL)table:(id)table canReuseCell:(id)cell;
-(id)table:(id)table cellForRow:(int)row column:(id)column reusing:(id)reusing;
-(id)table:(id)table cellForRow:(int)row column:(id)column;
-(void)scrollerDidScroll:(id)scroller;
-(BOOL)scroller:(id)scroller shouldAdjustSmoothScrollEndForVelocity:(CGSize)velocity;
-(CGPoint)scroller:(id)scroller adjustSmoothScrollEnd:(CGPoint)end velocity:(CGSize)velocity;
-(void)_sendSelectionChangedForComponent:(int)component;
-(void)setAllowsMultipleSelection:(BOOL)selection;
-(BOOL)allowsMultipleSelection;
-(void)_sendCheckedRow:(int)row inTable:(id)table checked:(BOOL)checked;
-(void)_sendSelectionChangedFromTable:(id)table;
-(void)scrollerDidEndDragging:(id)scroller willSmoothScroll:(BOOL)scroll;
-(void)scrollerDidEndSmoothScrolling:(id)scroller;
-(void)scrollerDidEndAnimatedScrolling:(id)scroller;
-(id)cellForRow:(int)row column:(int)column;
-(NSRange)visibleRowsForColumn:(int)column;
-(int)selectedRowInComponent:(int)component;
-(int)selectedRowForColumn:(int)column;
-(int)columnForTable:(id)table;
-(id)tableForColumn:(int)column;
-(id)selectedTableCellForColumn:(int)column;
-(void)_selectRow:(int)row inComponent:(int)component animated:(BOOL)animated notify:(BOOL)notify;
-(void)selectRow:(int)row inComponent:(int)component animated:(BOOL)animated;
-(void)selectRow:(int)row inColumn:(int)column animated:(BOOL)animated;
@end

@interface UIPickerView (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isAccessibilityElementByDefault;
@end

