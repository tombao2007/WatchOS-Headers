//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface NTKWellnessDataCache : NSObject
{
    BOOL _isEmpty;
    BOOL _databaseLoading;
    BOOL _userHasDoneActivitySetup;
    NSDate *_endDate;
    float _currentCalories;
    float _caloriesGoal;
    float _currentBriskMinutes;
    float _briskMinutesGoal;
    float _currentActiveHours;
    float _activeHoursGoal;
}

@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) BOOL isExpired;
@property(nonatomic) float activeHoursGoal; // @synthesize activeHoursGoal=_activeHoursGoal;
@property(nonatomic) float currentActiveHours; // @synthesize currentActiveHours=_currentActiveHours;
@property(nonatomic) float briskMinutesGoal; // @synthesize briskMinutesGoal=_briskMinutesGoal;
@property(nonatomic) float currentBriskMinutes; // @synthesize currentBriskMinutes=_currentBriskMinutes;
@property(nonatomic) float caloriesGoal; // @synthesize caloriesGoal=_caloriesGoal;
@property(nonatomic) float currentCalories; // @synthesize currentCalories=_currentCalories;
@property(readonly, nonatomic) BOOL userHasDoneActivitySetup; // @synthesize userHasDoneActivitySetup=_userHasDoneActivitySetup;
@property(readonly, nonatomic) BOOL databaseLoading; // @synthesize databaseLoading=_databaseLoading;
- (void)setUserHasDoneActivitySetup:(BOOL)arg1;
- (void)setDatabaseLoading:(BOOL)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isEmpty; // @synthesize isEmpty=_isEmpty;
- (id)description;
- (id)init;

@end
