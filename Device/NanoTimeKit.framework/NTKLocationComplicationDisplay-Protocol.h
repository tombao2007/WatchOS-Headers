//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTKComplicationDisplay.h"

@class NSString;

@protocol NTKLocationComplicationDisplay <NTKComplicationDisplay>
- (void)setLatitude:(NSString *)arg1 longitude:(NSString *)arg2;

@optional
- (void)setLocationName:(NSString *)arg1;
- (void)setValidLocation:(BOOL)arg1;
@end
