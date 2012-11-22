/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UIAlert.h>

@class NSString, UILabel, NSMutableArray, UIWindow, UIToolbar;
@protocol UIAlertViewDelegate;

@interface UIAlertView ()
-(id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;
-(void)dealloc;
-(void)setDefaultButtonIndex:(int)index;
-(int)defaultButtonIndex;
-(void)_setFirstOtherButtonIndex:(int)index;
-(void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;
-(id)initWithFrame:(CGRect)frame;
-(void)showWithAnimationType:(int)animationType;
-(void)show;
-(void)_useUndoStyle:(BOOL)style;
@end

@interface UIAlertView (Private)
+(CGSize)minimumSize;
+(id)_alertWindow;
+(id)_popupAlertBackground:(BOOL)background;
-(id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;
-(BOOL)groupsTextFields;
-(void)setGroupsTextFields:(BOOL)fields;
-(BOOL)requiresPortraitOrientation;
-(int)_currentOrientation;
-(void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;
-(id)buttons;
-(void)_createTitleLabelIfNeeded;
-(void)_createSubtitleLabelIfNeeded;
-(void)_createBodyTextLabelIfNeeded;
-(void)_createTaglineTextLabelIfNeeded;
-(void)_setupTitleStyle;
-(void)setBodyText:(id)text;
-(void)setTaglineText:(id)text;
-(void)setSubtitle:(id)subtitle;
-(id)subtitle;
-(id)bodyText;
-(void)setTitleMaxLineCount:(int)count;
-(int)titleMaxLineCount;
-(void)setBodyTextMaxLineCount:(int)count;
-(int)bodyMaxLineCount;
-(id)addTextFieldWithValue:(id)value label:(id)label;
-(id)textFieldAtIndex:(int)index;
-(int)textFieldCount;
-(id)textField;
-(void)_alertSheetTextFieldReturn:(id)aReturn;
-(id)keyboard;
-(void)setDefaultButton:(id)button;
-(id)defaultButton;
-(void)setDestructiveButton:(id)button;
-(id)destructiveButton;
-(id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;
-(id)addButtonWithTitle:(id)title label:(id)label;
-(id)_addButtonWithTitle:(id)title;
-(id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;
-(int)buttonCount;
-(id)buttonAtIndex:(int)index;
-(void)setContext:(id)context;
-(id)context;
-(void)_buttonClicked:(id)clicked;
-(void)_cleanupAfterPopupAnimation;
-(void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;
-(BOOL)tableShouldShowMinimumContent;
-(id)table;
-(BOOL)_needsKeyboard;
-(void)setShowsOverSpringBoardAlerts:(BOOL)alerts;
-(BOOL)showsOverSpringBoardAlerts;
-(void)_performPopup:(BOOL)popup animationType:(int)type;
-(void)_performPopup:(BOOL)popup;
-(void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;
-(void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;
-(void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;
-(void)_jiggleStage1AnimationDidStop:(id)_jiggleStage1Animation finished:(id)finished;
-(void)_jiggleStage2AnimationDidStop:(id)_jiggleStage2Animation finished:(id)finished;
-(void)_jiggleStage3AnimationDidStop:(id)_jiggleStage3Animation finished:(id)finished;
-(void)_jiggleStage4AnimationDidStop:(id)_jiggleStage4Animation finished:(id)finished;
-(void)_jiggleStage5AnimationDidStop:(id)_jiggleStage5Animation finished:(id)finished;
-(void)_jiggleStage6AnimationDidStop:(id)_jiggleStage6Animation finished:(id)finished;
-(BOOL)_isAnimating;
-(void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;
-(void)_performPopoutAnimationAnimated:(BOOL)animated;
-(void)_repopup;
-(BOOL)_dimsBackground;
-(BOOL)_canShowAlerts;
-(void)_removeAlertWindowOrShowAnOldAlert;
-(void)_temporarilyHideAnimated:(BOOL)animated;
-(void)_updateFrameForDisplay;
-(void)_rotatingAnimationDidStop:(id)_rotatingAnimation;
-(void)layoutAnimated:(BOOL)animated;
-(BOOL)isBodyTextTruncated;
-(void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;
-(void)_layoutIfNeeded;
-(void)_adjustLabelFontSizes;
-(void)popupAlertAnimated:(BOOL)animated animationType:(int)type atOffset:(float)offset;
-(void)popupAlertAnimated:(BOOL)animated atOffset:(float)offset;
-(void)popupAlertAnimated:(BOOL)animated animationType:(int)type;
-(void)popupAlertAnimated:(BOOL)animated;
-(void)rePopupAlertAfterRotation;
-(void)_presentSheetFromView:(id)view above:(BOOL)above;
-(void)presentSheetFromBehindView:(id)behindView;
-(void)presentSheetFromAboveView:(id)aboveView;
-(void)presentSheetInView:(id)view;
-(void)presentSheetToAboveView:(id)aboveView;
-(void)setDimView:(id)view;
-(id)_dimView;
-(void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;
-(void)_slideSheetOut:(BOOL)anOut;
-(void)dismiss;
-(void)dismissAnimated:(BOOL)animated;
-(CGSize)backgroundSize;
-(float)_titleVerticalTopInset;
-(float)_titleVerticalBottomInset;
-(float)_titleHorizontalInset;
-(float)_bottomVerticalInset;
-(void)drawRect:(CGRect)rect;
-(void)_appSuspended:(id)suspended;
-(void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;
-(void)setNumberOfRows:(int)rows;
-(int)numberOfRows;
-(int)alertSheetStyle;
-(void)setAlertSheetStyle:(int)style;
-(void)setDimsBackground:(BOOL)background;
-(BOOL)dimsBackground;
-(void)setSuspendTag:(int)tag;
-(int)suspendTag;
-(void)setBlocksInteraction:(BOOL)interaction;
-(BOOL)blocksInteraction;
-(void)setRunsModal:(BOOL)modal;
-(BOOL)runsModal;
-(CGRect)titleRect;
-(float)_maxHeight;
-(float)_buttonHeight;
-(void)layout;
-(void)presentSheetFromButtonBar:(id)buttonBar;
-(void)_prepareForDisplay;
-(void)replaceAlert:(id)alert;
-(void)_prepareToBeReplaced;
@end

