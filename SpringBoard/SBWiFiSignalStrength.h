/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIImageView.h>


@interface SBWiFiSignalStrength : UIImageView {
	int _bars;
	float _rawStrength;
	BOOL _hilited;
	BOOL _selected;
	BOOL _secure;
	BOOL _joining;
	UIImageView* _icon;
}
+(void)hideSpinner;
-(void)setSpinnerHilited:(BOOL)hilited;
-(id)initWithFrame:(CGRect)frame inView:(id)view;
-(BOOL)joining;
-(void)setJoining:(BOOL)joining;
-(void)updateStrength:(id)strength;
-(BOOL)selected;
-(void)hide;
-(void)setSelected:(BOOL)selected;
-(BOOL)hilited;
-(void)setHilited:(BOOL)hilited;
-(BOOL)secure;
-(void)setSecure:(BOOL)secure;
-(void)updateImage;
@end

