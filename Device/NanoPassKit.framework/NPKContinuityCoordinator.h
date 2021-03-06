//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSUserActivity;

@interface NPKContinuityCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSUserActivity *_provisionPassUserActivity;
    NSUserActivity *_getPaymentPassesUserActivity;
    NSUserActivity *_passListUserActivity;
    NSUserActivity *_individualPassUserActivity;
    NSUserActivity *_currentUserActivity;
}

+ (id)sharedContinuityCoordinator;
- (id)userActivityForPassWithUniqueID:(id)arg1;
- (void)userNeedsPaymentPasses;
- (void)userNeedsToProvisionPassWithUniqueID:(id)arg1;
- (void)userViewingPassWithUniqueID:(id)arg1 isPaymentPass:(BOOL)arg2;
- (void)userViewingPassList;
@property(nonatomic) __weak NSUserActivity *currentUserActivity; // @synthesize currentUserActivity=_currentUserActivity;
@property(retain, nonatomic) NSUserActivity *getPaymentPassesUserActivity; // @synthesize getPaymentPassesUserActivity=_getPaymentPassesUserActivity;
@property(retain, nonatomic) NSUserActivity *individualPassUserActivity; // @synthesize individualPassUserActivity=_individualPassUserActivity;
@property(retain, nonatomic) NSUserActivity *provisionPassUserActivity; // @synthesize provisionPassUserActivity=_provisionPassUserActivity;
- (id)_skeletonBridgeUserActivity;
- (void)_saveUserActivity:(id)arg1;
@property(retain, nonatomic) NSUserActivity *passListUserActivity; // @synthesize passListUserActivity=_passListUserActivity;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (void)dealloc;

@end

