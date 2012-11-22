/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class UIImageView, SBClipCornerView;

@interface SBRoundedCornerView : UIView {
	SBClipCornerView* _clipCornerViews[4];
	float _cornerRadius;
	float _cornerSize;
	float _edgeInset;
	UIImageView* _imageSuperview;
}
-(id)initWithCornerRadius:(float)cornerRadius size:(float)size inset:(float)inset imageSuperview:(id)superview;
-(CGPoint)_originForCornerIndex:(int)cornerIndex withBoundsSize:(CGSize)boundsSize;
-(void)_layoutSubviews;
-(void)setFrame:(CGRect)frame;
// inherited: -(void)dealloc;
@end

