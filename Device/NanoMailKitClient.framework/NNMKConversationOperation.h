//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NNMKConversation, NSArray, NSIndexSet, NSString;

@interface NNMKConversationOperation : NSObject <NSSecureCoding>
{
    int _type;
    NNMKConversation *_conversation;
    NSString *_conversationId;
    NSArray *_messagesAdded;
    NSIndexSet *_messagesAddedIndexes;
    NSArray *_messagesUpdated;
    NSIndexSet *_messagesUpdatedIndexes;
    NSIndexSet *_messagesDeletedIndexes;
    NSArray *_messagesUnchanged;
    unsigned int _previousIndex;
    unsigned int _newIndex;
}

+ (id)conversationDeleteOperationForConversationId:(id)arg1 previousIndex:(unsigned int)arg2;
+ (id)conversationUpdateOperationForConversation:(id)arg1 previousIndex:(unsigned int)arg2 newIndex:(unsigned int)arg3 messagesAdded:(id)arg4 messagesAddedIndexes:(id)arg5 messagesUpdated:(id)arg6 messagesUpdatedIndexes:(id)arg7 messagesDeletedIndexes:(id)arg8 messagesUnchanged:(id)arg9;
+ (id)conversationAddOperationForConversation:(id)arg1 index:(unsigned int)arg2 messages:(id)arg3;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int newIndex; // @synthesize newIndex=_newIndex;
@property(nonatomic) unsigned int previousIndex; // @synthesize previousIndex=_previousIndex;
@property(retain, nonatomic) NSArray *messagesUnchanged; // @synthesize messagesUnchanged=_messagesUnchanged;
@property(retain, nonatomic) NSIndexSet *messagesDeletedIndexes; // @synthesize messagesDeletedIndexes=_messagesDeletedIndexes;
@property(retain, nonatomic) NSIndexSet *messagesUpdatedIndexes; // @synthesize messagesUpdatedIndexes=_messagesUpdatedIndexes;
@property(retain, nonatomic) NSArray *messagesUpdated; // @synthesize messagesUpdated=_messagesUpdated;
@property(retain, nonatomic) NSIndexSet *messagesAddedIndexes; // @synthesize messagesAddedIndexes=_messagesAddedIndexes;
@property(retain, nonatomic) NSArray *messagesAdded; // @synthesize messagesAdded=_messagesAdded;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(retain, nonatomic) NNMKConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
