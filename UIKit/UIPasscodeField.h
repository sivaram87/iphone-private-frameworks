/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "UITextFieldDelegate.h"
#import <UIKit/UIView.h>
#import <UIKit/UITextInputTraits.h>

@class NSMutableArray, UIPushButton, NSMutableString, NSString;

@interface UIPasscodeField : UIView <UITextFieldDelegate> {
	NSMutableString* _value;
	NSMutableArray* _entryFields;
	NSMutableArray* _entryBackgrounds;
	UIPushButton* _okButton;
	BOOL _opaqueBackground;
	BOOL _centerHorizontally;
	int _keyboardType;
	int _keyboardAppearance;
	id _delegate;
}
+(CGFloat)defaultHeight;
-(id)initWithFrame:(CGRect)frame;
-(void)setKeyboardType:(UIKeyboardType)type;
-(void)setKeyboardType:(UIKeyboardType)type appearance:(UIKeyboardAppearance)appearance;
-(void)dealloc;
-(void)_updateFields;
-(BOOL)showsOKButton;
-(void)setShowsOKButton:(BOOL)button;
-(void)setTextCentersHorizontally:(BOOL)horizontally;
-(NSString*)stringValue;
-(void)setStringValue:(NSString*)value;
-(void)appendString:(NSString*)string;
-(void)deleteLastCharacter;
-(int)numberOfEntryFields;
-(void)setNumberOfEntryFields:(int)entryFields opaqueBackground:(BOOL)background;
-(void)setNumberOfEntryFields:(int)entryFields;
// -(BOOL)canBecomeFirstResponder;
// -(BOOL)becomeFirstResponder;
-(void)setDelegate:(id)delegate;
// -(void)_textDidChange;
// -(BOOL)textField:(id)field shouldInsertText:(id)text replacingRange:(NSRange)range;
// -(BOOL)textFieldShouldStartEditing:(id)textField;
// -(void)textFieldDidResignFirstResponder:(id)textField;
// -(void)okButtonClicked:(id)clicked;
// -(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
@end


@protocol UIPasscodeFieldDelegate
@optional
-(void)passcodeFieldDidAcceptEntry:(UIPasscodeField*)field;
-(BOOL)passcodeField:(UIPasscodeField*)field shouldInsertText:(NSString*)text;
-(void)passcodeFieldTextDidChange:(UIPasscodeField*)field;
@end
