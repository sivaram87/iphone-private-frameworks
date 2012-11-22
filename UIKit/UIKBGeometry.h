/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <Foundation/NSObject.h>

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying> {
	NSString* m_name;
	XXStruct_tp$7nC m_x;
	XXStruct_tp$7nC m_y;
	XXStruct_tp$7nC m_w;
	XXStruct_tp$7nC m_h;
	XXStruct_tp$7nC m_paddingTop;
	XXStruct_tp$7nC m_paddingLeft;
	XXStruct_tp$7nC m_paddingBottom;
	XXStruct_tp$7nC m_paddingRight;
	BOOL m_explicit;
}
@property(retain, nonatomic) NSString* name;
@property(assign, nonatomic, setter=setX:) XXStruct_tp$7nC x;
@property(assign, nonatomic, setter=setY:) XXStruct_tp$7nC y;
@property(assign, nonatomic, setter=setW:) XXStruct_tp$7nC w;
@property(assign, nonatomic, setter=setH:) XXStruct_tp$7nC h;
@property(assign, nonatomic, setter=setPaddingTop:) XXStruct_tp$7nC paddingTop;
@property(assign, nonatomic, setter=setPaddingLeft:) XXStruct_tp$7nC paddingLeft;
@property(assign, nonatomic, setter=setPaddingBottom:) XXStruct_tp$7nC paddingBottom;
@property(assign, nonatomic, setter=setPaddingRight:) XXStruct_tp$7nC paddingRight;
@property(assign, nonatomic) BOOL explicit;
+(id)geometry;
+(id)geometryWithRect:(CGRect)rect;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(CGRect)frame;
-(CGRect)frameWithContainingFrame:(CGRect)containingFrame;
-(CGRect)paddedFrameWithContainingFrame:(CGRect)containingFrame;
-(CGRect)paddedFrameWithResolvedFrame:(CGRect)resolvedFrame;
-(id)overrideGeometry:(id)geometry;
@end

