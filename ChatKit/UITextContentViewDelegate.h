/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "ChatKit-Structs.h"
#import "NSObject.h"


@protocol UITextContentViewDelegate <NSObject>
@optional
-(BOOL)textContentViewShouldBeginEditing:(id)textContentView;
-(BOOL)textContentViewShouldEndEditing:(id)textContentView;
-(void)textContentViewDidBeginEditing:(id)textContentView;
-(void)textContentViewDidEndEditing:(id)textContentView;
-(BOOL)textContentView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textContentViewDidChange:(id)textContentView;
-(void)textContentViewDidChangeSelection:(id)textContentView;
-(BOOL)textContentView:(id)view shouldScrollForPendingContentSize:(CGSize)pendingContentSize;
-(BOOL)textContentView:(id)view shouldChangeSizeForContentSize:(CGSize)contentSize;
-(void)textContentView:(id)view didChangeSize:(CGSize)size;
@end

