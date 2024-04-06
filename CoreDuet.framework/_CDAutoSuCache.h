/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSDate;

@interface _CDAutoSuCache : NSObject {

	NSDictionary* _predictedSleep;
	NSDate* _predictedSleepValidityStartDate;
	NSDate* _predictedSleepValidityEndDate;

}

@property (retain) NSDictionary * predictedSleep;                         //@synthesize predictedSleep=_predictedSleep - In the implementation block
@property (retain) NSDate * predictedSleepValidityStartDate;              //@synthesize predictedSleepValidityStartDate=_predictedSleepValidityStartDate - In the implementation block
@property (retain) NSDate * predictedSleepValidityEndDate;                //@synthesize predictedSleepValidityEndDate=_predictedSleepValidityEndDate - In the implementation block
+(id)sharedCache;
-(void)clear;
-(void)setPredictedSleepValidityEndDate:(NSDate *)arg1 ;
-(id)cachedPredictedSleepDictionaryForDate:(id)arg1 ;
-(void)setPredictedSleepValidityStartDate:(NSDate *)arg1 ;
-(NSDate *)predictedSleepValidityEndDate;
-(void)setCachedPredictedSleepDictionary:(id)arg1 validityStartDate:(id)arg2 validityEndDate:(id)arg3 ;
-(void)setPredictedSleep:(NSDictionary *)arg1 ;
-(NSDictionary *)predictedSleep;
-(NSDate *)predictedSleepValidityStartDate;
@end
