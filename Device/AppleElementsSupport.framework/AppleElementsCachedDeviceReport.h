//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AppleElementsCachedDeviceReport : NSObject
{
    unsigned char _report[4096];
    unsigned int _reportID;
    long _reportLength;
}

+ (void)addToPool:(id)arg1;
+ (id)getFromPool;
+ (id)pool;
+ (id)poolLock;
@property(readonly) char *report;
@property long reportLength; // @synthesize reportLength=_reportLength;
@property unsigned int reportID; // @synthesize reportID=_reportID;

@end

