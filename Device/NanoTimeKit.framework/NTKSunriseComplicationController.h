//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKComplicationController.h>

@class CLLocation, NSNumber, NSTimer;

@interface NTKSunriseComplicationController : NTKComplicationController
{
    struct {
        unsigned int wantsShowingSunrise:1;
        unsigned int wantsLocation:1;
        unsigned int wantsCoordinates:1;
        unsigned int wantsLocked:1;
        unsigned int wantsPaused:1;
    } _displayFlags;
    NSTimer *_afterSunriseTimer;
    NSTimer *_afterSunsetTimer;
    BOOL _usesAstronomicalTwilightChangeTime;
    BOOL _paused;
    BOOL _missedUpdateWhilePaused;
    BOOL _updatedLocation;
    struct NSNumber *_token;
    CLLocation *_location;
}

@property(nonatomic) __weak id <NTKSunriseComplicationDisplay> display;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void)_afterSunsetTimerFired:(id)arg1;
- (void)_afterSunriseTimerFired:(id)arg1;
- (void)_updatePlacemark;
@property(nonatomic) BOOL updatedLocation; // @synthesize updatedLocation=_updatedLocation;
- (void)_updatePlacemarkIfNecessary;
- (void)_scheduleAfterSunsetTimer:(id)arg1;
- (void)_scheduleAfterSunriseTimer:(id)arg1;
- (void)setLockScreenBorrowed:(BOOL)arg1;
- (void)setDataMode:(int)arg1;
- (void)_updateDisplayForced:(BOOL)arg1;
- (void)_invalidateSunsetTimer;
- (void)_invalidateSunriseTimer;
- (BOOL)hasTapAction;
- (id)initWithComplication:(id)arg1;
@property(retain, nonatomic) NSNumber *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_updateDisplay;

@end
