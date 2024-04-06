/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface _CDObservationCenter : NSObject {

	NSMapTable* _senderToNotificationObservers;
	NSMapTable* _senderToNotificationObserverObservers;

}
+(id)sharedInstance;
-(void)removeObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(void)removeObserverChangesObserver:(id)arg1 onName:(id)arg2 ;
-(void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)removeObserver:(id)arg1 name:(id)arg2 ;
-(void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingSelector:(SEL)arg4 ;
-(void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingSelector:(SEL)arg5 ;
-(unsigned long long)observerCountOnName:(id)arg1 ;
-(void)postNotificationName:(id)arg1 userInfo:(id)arg2 sender:(id)arg3 ;
@end

