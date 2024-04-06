/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDRateLimiting.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDate, NSArray, NSMutableArray, NSString;

@interface _CDMultiLevelRateLimiter : NSObject <_CDRateLimiting> {

	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _lastRecorded;
	long long _numberOfRateLimitPolicies;
	NSArray* _periods;
	NSMutableArray* _periodStart;
	NSArray* _maxCounts;
	NSMutableArray* _balances;

}

@property (nonatomic,retain,readonly) NSDate * lastRecorded;                  //@synthesize lastRecorded=_lastRecorded - In the implementation block
@property (nonatomic,readonly) long long numOfRateLimitPolicies;              //@synthesize numberOfRateLimitPolicies=_numberOfRateLimitPolicies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)debited;
-(NSDate *)lastRecorded;
-(BOOL)credit;
-(id)init;
-(long long)numOfRateLimitPolicies;
-(id)initWithPeriodToCountMap:(id)arg1 ;
-(NSString *)description;
-(void)recordTimeAndRefillIfNeededRaw;
@end

