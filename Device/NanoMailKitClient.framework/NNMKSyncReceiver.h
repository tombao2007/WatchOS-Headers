//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NNMKSyncReceiverXPCBasicClientInterface.h"
#import "NNMKSyncReceiverXPCConversationsBrowsingBasedClientInterface.h"
#import "NNMKSyncReceiverXPCMessageUpdatesBasedClientInterface.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, NSXPCInterface;

@interface NNMKSyncReceiver : NSObject <NNMKSyncReceiverXPCBasicClientInterface, NNMKSyncReceiverXPCConversationsBrowsingBasedClientInterface, NNMKSyncReceiverXPCMessageUpdatesBasedClientInterface>
{
    id <NNMKSyncReceiverDelegate> _delegate;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_receiverQueue;
    NSString *_serviceName;
    NSXPCInterface *_interface;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *receiverQueue; // @synthesize receiverQueue=_receiverQueue;
- (oneway void)receiverXPCServerDidReplyWithMessageContent:(id)arg1;
- (void)notifyWhenDoneProcessingWithBlock:(CDUnknownBlockType)arg1;
- (oneway void)receiverXPCServerDidDeleteMessageWithId:(id)arg1;
- (oneway void)receiverXPCServerDidUpdateMessage:(id)arg1;
- (oneway void)receiverXPCServerDidAddNewMessage:(id)arg1;
- (oneway void)receiverXPCServerDidChangeSyncedMailboxType:(unsigned int)arg1 accountId:(id)arg2 url:(id)arg3 customName:(id)arg4;
- (oneway void)receiverXPCServerDidNotifyFetchRequestCompleted;
- (oneway void)receiverXPCServerDidNotifyOldMessagesAvailable;
- (oneway void)receiverXPCServerDidFailSyncingMessagesWithError:(id)arg1;
- (oneway void)receiverXPCServerDidFinishSyncingMessagesSuccessfullyReceivingMessages:(BOOL)arg1;
- (oneway void)receiverXPCServerDidExecuteConversationOperations:(id)arg1;
- (oneway void)receiverXPCServerConnectivityDidChange:(BOOL)arg1;
- (oneway void)receiverXPCServerDidRequestReloadCache;
- (oneway void)receiverXPCServerDidDeleteAllMessages;
- (oneway void)receiverXPCServerDidDeleteAccountWithId:(id)arg1;
- (oneway void)receiverXPCServerDidUpdateAccount:(id)arg1;
- (oneway void)receiverXPCServerDidAddNewAccount:(id)arg1;
- (oneway void)receiverXPCServerDidReceiveImageAttachmentForMessageWithId:(id)arg1 contentId:(id)arg2;
- (oneway void)receiverXPCServerDidReceiveContentForMessageWithId:(id)arg1;
- (oneway void)receiverXPCServerDidReplyWithFirstUnreadMessages:(id)arg1;
- (oneway void)receiverXPCServerDidReplyWithIsConnected:(BOOL)arg1;
- (oneway void)receiverXPCServerDidReplyWithSyncedMailboxType:(unsigned int)arg1 accountId:(id)arg2 url:(id)arg3 customName:(id)arg4;
- (oneway void)receiverXPCServerDidReplyWithAccounts:(id)arg1;
- (oneway void)receiverXPCServerDidReplyWithMessageContentLoadFailedForMessageWithId:(id)arg1;
- (oneway void)receiverXPCServerDidReplyWithMessage:(id)arg1;
- (oneway void)receiverXPCServerDidReplyWithConversationOperations:(id)arg1 totalConversationsCount:(unsigned int)arg2 willFetch:(BOOL)arg3 error:(id)arg4;
- (void)preventDatabaseCompactingProcedure;
- (void)permitDatabaseCompactingProcedure;
- (void)removeMessagesBasedOnCurrentMailboxType;
- (void)requestFetchManualForConversationWithId:(id)arg1;
- (void)requestFetchManual;
- (void)requestFetchResume;
- (void)requestSyncOfPreviewForMessageWithId:(id)arg1;
- (void)requestIsConnected;
- (void)requestSyncedMailbox;
- (void)requestFirstUnreadMessagesWithContent:(unsigned int)arg1 fromAccountsWithIds:(id)arg2 orVIPs:(BOOL)arg3 orNotifyConversation:(BOOL)arg4 excludingMessageIds:(id)arg5;
- (void)notifyOpenedMessageWithId:(id)arg1;
- (void)requestMessageWithId:(id)arg1;
- (void)requestMoreMessagesForConversationWithId:(id)arg1;
- (void)requestConversationsReceivedBefore:(id)arg1 count:(unsigned int)arg2;
- (void)_runOnServer:(CDUnknownBlockType)arg1;
- (void)requestFirstConversations:(unsigned int)arg1;
- (void)_pingServerAndNotifyDelegateDidResetXPCConnection;
- (void)_xpcServerBecameAvailable;
- (void)_initializeXPCConnection;
- (void)deleteMessages:(id)arg1;
- (void)updateMessagesStatus:(id)arg1;
- (void)sendMessageTo:(id)arg1 cc:(id)arg2 subject:(id)arg3 body:(id)arg4;
- (void)requestAccounts;
- (id)initWithServiceName:(id)arg1 interface:(id)arg2;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSXPCInterface *interface; // @synthesize interface=_interface;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
@property __weak id <NNMKSyncReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
