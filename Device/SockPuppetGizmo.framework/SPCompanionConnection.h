//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPGizmoApplicationProtocol.h"

@class NSString, NSXPCConnection;

@interface SPCompanionConnection : NSObject <SPGizmoApplicationProtocol>
{
    NSString *_identifier;
    id <SPCompanionConnectionDelegate> _delegate;
    NSString *_serverIdentifier;
    NSString *_clientIdentifier;
    NSXPCConnection *_serverConnection;
}

- (void)updateCoreDuetSession:(id)arg1;
- (void)sendCacheRequest:(id)arg1;
- (void)sendCacheRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendCacheReply:(id)arg1;
- (void)getComplicationData;
- (void)sendComplicationDataClassName:(id)arg1;
- (void)willDeactivateDataConnection;
- (void)didActivateDataConnection;
- (void)sendPlist:(id)arg1;
- (void)receiveData:(id)arg1;
- (void)companionDaemonDidRestart;
- (void)extensionDidTerminate;
@property(retain) NSXPCConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
- (void)interfaceViewController:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (void)interfaceViewController:(id)arg1 action:(id)arg2 value:(id)arg3;
- (void)appWithRootInterfaceViewController:(id)arg1 performActionWithItemID:(id)arg2 forNotificationID:(id)arg3;
- (void)interfaceViewControllerDeactivate:(id)arg1;
- (void)interfaceViewControllerActivate:(id)arg1;
- (void)interfaceViewControllerRelease:(id)arg1;
- (void)interfaceViewController:(id)arg1 createCompanionControllerClass:(id)arg2 properties:(id)arg3 initializationContextID:(id)arg4 info:(id)arg5;
- (void)sendTextInput:(id)arg1;
- (void)appWithRootInterfaceViewControllers:(id)arg1 performActionForUserActivity:(id)arg2;
- (void)duetAppWillResignActive;
- (void)duetAppDidBecomeActive;
- (void)didActivate;
- (void)fetchConnectionIdentifierWithReply:(CDUnknownBlockType)arg1;
- (void)didFinishLaunching;
- (void)connectWithIdentifier:(id)arg1;
- (void)didEnterForegroundSuspended;
- (void)didFullySuspend;
- (void)retreiveTimingInfo:(int)arg1;
- (void)resetTimingInfo;
- (void)sendCompanionLogMessage:(id)arg1;
- (void)willDeactivate;
@property(copy, nonatomic) NSString *serverIdentifier; // @synthesize serverIdentifier=_serverIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)invalidate;
@property(nonatomic) __weak id <SPCompanionConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

