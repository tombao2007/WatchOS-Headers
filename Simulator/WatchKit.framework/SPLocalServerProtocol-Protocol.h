//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSNumber, NSString;

@protocol SPLocalServerProtocol <NSObject>
- (void)getAlwaysInstallWithCompletion:(void (^)(_Bool))arg1;
- (void)setAlwaysInstall:(NSNumber *)arg1;
- (void)setLogLevel:(NSDictionary *)arg1;
- (void)installProvisioningProfileWithName:(NSString *)arg1 profileData:(NSData *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)wakeExtensionForWatchApp:(NSString *)arg1;
- (void)hideUserNotification;
- (void)showUserNotification:(long long)arg1 applicationName:(NSString *)arg2;
- (void)getCompanionExtensionPIDForCompanionAppWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *, int))arg2;
- (void)getSockPuppetAppRunningStatusForCompanionAppWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *, _Bool))arg2;
- (void)terminateSockPuppetAppForCompanionAppWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)launchSockPuppetAppForCompanionAppWithIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(NSString *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithIdentifier:(NSString *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (void)fetchApplicationWithContainingApplicationBundleID:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)removeApplicationWithIdentifier:(NSString *)arg1 installer:(NSString *)arg2 completion:(void (^)(long long))arg3;
- (void)installApplicationWithIdentifier:(NSString *)arg1 installer:(NSString *)arg2 completion:(void (^)(long long))arg3;
- (void)cancelPendingInstallations;
- (void)installAllApplicationsForProcessWithIdentifier:(NSString *)arg1;
- (void)fetchInstalledGlancesWithCompletion:(void (^)(NSDictionary *))arg1;
- (void)fetchInstalledApplicationsWithCompletion:(void (^)(NSDictionary *))arg1;
@end

