/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreDuet/CoreDuet-Structs.h>
@class NSString, NSArray, PETEventTracker;

@interface _DKEventStatsCounterInternal : NSObject {

	os_unfair_lock_s _lock;
	BOOL _hasType;
	BOOL _hasResult;
	unsigned long long _numCounters;
	unsigned long long* _counters;
	NSString* _eventName;
	NSString* _eventType;
	NSArray* _typeValues;
	NSString* _domain;
	PETEventTracker* _eventTracker;

}
-(void)dealloc;
@end

