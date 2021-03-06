//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol NTKTimerServer <NSObject>
- (void)getModelWithHandler:(void (^)(int, double, double, double))arg1;
- (void)requestUpdateState;
- (void)setDefaultCountdownDuration:(double)arg1;
- (void)pauseResumeTimer:(BOOL)arg1;
- (void)cancelTimer;
- (void)startTimer:(double)arg1;
@end

