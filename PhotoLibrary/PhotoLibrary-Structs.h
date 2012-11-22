/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

typedef struct _NSZone NSZone;

typedef struct __CFData* CFDataRef;

typedef struct CGContext* CGContextRef;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct _NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct __GSEvent* GSEventRef;

typedef struct CGImage* CGImageRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	int _field1;
	int _field2;
	id _field3;
	id _field4;
	float _field5;
	int _field6;
	SEL _field7;
	id _field8;
} XXStruct_b4LybD;

typedef struct __CFMessagePort* CFMessagePortRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	id _field1;
	float _field2;
	CFArrayRef _field3;
	float _field4;
} XXStruct_z8YKPA;

typedef struct __CFString* CFStringRef;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct {
	int version;
	void* info;
	/*function-pointer*/ void* retain;
	/*function-pointer*/ void* release;
	/*function-pointer*/ void* copyDescription;
} XXStruct_4pnlqD;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct CGPath* CGPathRef;

typedef struct CGColor* CGColorRef;

typedef struct {
	CGRect _field1;
	CGRect _field2;
	CGRect _field3;
} XXStruct_SIyEID;

typedef struct {
	BOOL _field1;
	BOOL _field2;
	BOOL _field3;
	float _field4;
	float _field5;
	int _field6;
	CGRect _field7;
	CGRect _field8;
} XXStruct_TF$i3B;

typedef struct {
	BOOL _field1;
	union {
		struct {
			id _field1;
			id _field2;
		} _field1;
		GSEventRef _field2;
	} _field2;
} XXStruct_CKAdxD;

typedef struct {
	int _field1;
	int _field2;
} XXStruct_K5nmsA;

typedef struct {
	unsigned long _field1;
	id* _field2;
	unsigned long* _field3;
	unsigned long _field4[5];
} XXStruct_kFm5bA;


