/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CDDevice : NSObject {

	BOOL _isDefaultPaired;
	unsigned _identifier;
	NSString* _modelIdentifier;

}

@property (readonly) unsigned identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * modelIdentifier;              //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (assign) BOOL isDefaultPaired;                      //@synthesize isDefaultPaired=_isDefaultPaired - In the implementation block
-(unsigned)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(BOOL)isDefaultPaired;
-(id)initWithSession:(id)arg1 identifier:(unsigned)arg2 modelIdentifier:(id)arg3 defaultPaired:(BOOL)arg4 error:(id*)arg5 ;
-(id)initWithSession:(id)arg1 identifier:(unsigned)arg2 modelIdentifier:(id)arg3 error:(id*)arg4 ;
-(id)readSystemDataWithError:(id*)arg1 ;
-(BOOL)setSystemDataHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)requestSystemDataWithError:(id*)arg1 ;
-(BOOL)setLogDataHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)readLogDataWithError:(id*)arg1 ;
-(BOOL)requestLogDataWithError:(id*)arg1 ;
-(void)setIsDefaultPaired:(BOOL)arg1 ;
-(unsigned long long)hash;
-(NSString *)modelIdentifier;
-(id)description;
@end

