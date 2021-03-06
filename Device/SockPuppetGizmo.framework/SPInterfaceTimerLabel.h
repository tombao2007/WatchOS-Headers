//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SockPuppetGizmo/SPInterfaceLabel.h>

@class NSDate, NSDateComponentsFormatter, NSNumber, NSTimer;

@interface SPInterfaceTimerLabel : SPInterfaceLabel
{
    BOOL _timerEnabled;
    BOOL _countdown;
    NSDateComponentsFormatter *_formatter;
    NSDate *_date;
    NSTimer *_timer;
    NSNumber *_forcedTimeInterval;
    double _updateInterval;
    struct CGSize _cachedSize;
}

@property(nonatomic) BOOL countdown; // @synthesize countdown=_countdown;
@property(nonatomic) BOOL timerEnabled; // @synthesize timerEnabled=_timerEnabled;
@property(copy, nonatomic) NSNumber *forcedTimeInterval; // @synthesize forcedTimeInterval=_forcedTimeInterval;
- (void)applyMonospaceNumbers;
@property(nonatomic) struct CGSize cachedSize; // @synthesize cachedSize=_cachedSize;
- (id)initWithItemDescription:(id)arg1 bundle:(id)arg2 stringsFileName:(id)arg3;
- (void)setInterfaceItemValue:(id)arg1 property:(id)arg2;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)updateText;
- (void)updateTimer;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)didMoveToWindow;
- (void)dealloc;
@property(retain, nonatomic) NSDateComponentsFormatter *formatter; // @synthesize formatter=_formatter;

@end

