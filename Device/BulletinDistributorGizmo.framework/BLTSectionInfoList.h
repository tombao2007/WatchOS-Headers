//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BLTSectionInfoObserverDelegate.h"

@class BLTSectionInfoObserver, NSMutableDictionary, NSString;

@interface BLTSectionInfoList : NSObject <BLTSectionInfoObserverDelegate>
{
    BLTSectionInfoObserver *_observer;
    NSMutableDictionary *_sectionInfoListItemsBySectionID;
    struct _opaque_pthread_mutex_t {
        long __sig;
        char __opaque[40];
    } _lock;
}

- (id)displayNameWithSectionID:(id)arg1;
- (id)universalSectionIDWithSectionID:(id)arg1;
- (id)sectionInfoWithSectionID:(id)arg1;
- (id)sectionInfoWithUniversalSectionID:(id)arg1;
- (void)sectionInfoObserver:(id)arg1 updatedSectionInfo:(id)arg2 withUniversalSectionID:(id)arg3 displayName:(id)arg4;
- (void)_addListItemWithSectionInfo:(id)arg1 withUniversalSectionID:(id)arg2 displayName:(id)arg3;
- (void)reloadWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
