/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "ML3PropertyPredicate.h"

@class NSString;

@interface ML3ComparisonPredicate : ML3PropertyPredicate {
@private
	id _value;
	NSString* _transformFunction;
	int _comparison;
	BOOL _caseInsensitive;
	BOOL _treatNullAsBlank;
}
@property(retain, nonatomic) id value;
@property(assign, nonatomic) int comparison;
@property(assign, nonatomic) BOOL caseInsensitive;
@property(assign, nonatomic) BOOL treatNullAsBlank;
@property(copy, nonatomic) NSString* transformFunction;
@property(readonly, assign, nonatomic) NSString* operator;
+(id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison;
+(id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison caseInsensitive:(BOOL)insensitive;
+(id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison caseInsensitive:(BOOL)insensitive treatNullAsBlank:(BOOL)blank;
+(id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison transformFunction:(id)function;
-(id)initWithProperty:(id)property value:(id)value comparison:(int)comparison caseInsensitive:(BOOL)insensitive transformFunction:(id)function treatNullAsBlank:(BOOL)blank;
-(void)dealloc;
-(id)description;
-(id)SQLForEntityClass:(Class)entityClass;
-(void)bindToSqlite3Statement:(sqlite3_stmt*)sqlite3Statement bindingIndex:(inout int*)index;
@end

