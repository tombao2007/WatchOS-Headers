//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTKComplicationDisplay.h"

@class NSDate, NSString;

@protocol NTKMoonPhaseComplicationDisplay <NTKComplicationDisplay>

@optional
- (void)setPaused:(BOOL)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)setMoonEvent:(int)arg1 date:(NSDate *)arg2;
- (void)setPhaseNumber:(unsigned int)arg1;
- (void)setPhaseName:(NSString *)arg1;
@end

