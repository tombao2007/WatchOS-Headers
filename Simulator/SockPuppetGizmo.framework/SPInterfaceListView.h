//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PUICTableViewDataSource.h"
#import "PUICTableViewDelegate.h"
#import "SPInterfaceActionItem.h"

@class NSBundle, NSDictionary, NSMutableArray, NSString, PUICTableView;

@interface SPInterfaceListView : UIView <PUICTableViewDataSource, PUICTableViewDelegate, SPInterfaceActionItem>
{
    _Bool _isUpdatingTable;
    _Bool _tableViewDidReload;
    _Bool _isInInterfaceBuilder;
    _Bool _enabled;
    long long _index;
    NSDictionary *_itemDescriptionForIB;
    NSBundle *_bundle;
    NSString *_stringsFileName;
    long long _interfaceAlignment;
    long long _verticalInterfaceAlignment;
    NSDictionary *_listProperty;
    NSString *_actionValue;
    NSDictionary *_segueValue;
    double _width;
    double _height;
    NSDictionary *_rowDescriptions;
    NSDictionary *_rowProperties;
    NSMutableArray *_items;
    PUICTableView *_tableView;
    id _target;
    SEL _action;
    NSDictionary *_selectionSegue;
    NSMutableArray *_dirtyItems;
    NSMutableArray *_updatedIndexPaths;
    struct CGSize _fixedSize;
    struct CGSize _cachedTableViewContentSize;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool isInInterfaceBuilder; // @synthesize isInInterfaceBuilder=_isInInterfaceBuilder;
@property(nonatomic) struct CGSize cachedTableViewContentSize; // @synthesize cachedTableViewContentSize=_cachedTableViewContentSize;
@property(nonatomic) _Bool tableViewDidReload; // @synthesize tableViewDidReload=_tableViewDidReload;
@property(nonatomic) _Bool isUpdatingTable; // @synthesize isUpdatingTable=_isUpdatingTable;
@property(retain, nonatomic) NSMutableArray *updatedIndexPaths; // @synthesize updatedIndexPaths=_updatedIndexPaths;
@property(retain, nonatomic) NSMutableArray *dirtyItems; // @synthesize dirtyItems=_dirtyItems;
@property(copy, nonatomic) NSDictionary *selectionSegue; // @synthesize selectionSegue=_selectionSegue;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) PUICTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSDictionary *rowProperties; // @synthesize rowProperties=_rowProperties;
@property(copy, nonatomic) NSDictionary *rowDescriptions; // @synthesize rowDescriptions=_rowDescriptions;
@property(nonatomic) struct CGSize fixedSize; // @synthesize fixedSize=_fixedSize;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSDictionary *segueValue; // @synthesize segueValue=_segueValue;
@property(copy, nonatomic) NSString *actionValue; // @synthesize actionValue=_actionValue;
@property(copy, nonatomic) NSDictionary *listProperty; // @synthesize listProperty=_listProperty;
@property(nonatomic) long long verticalInterfaceAlignment; // @synthesize verticalInterfaceAlignment=_verticalInterfaceAlignment;
@property(nonatomic) long long interfaceAlignment; // @synthesize interfaceAlignment=_interfaceAlignment;
@property(copy, nonatomic) NSString *stringsFileName; // @synthesize stringsFileName=_stringsFileName;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSDictionary *itemDescriptionForIB; // @synthesize itemDescriptionForIB=_itemDescriptionForIB;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)prepareInterfaceItemForIB;
- (void)action:(id)arg1 value:(id)arg2;
- (void)setInterfaceItemValue:(id)arg1 property:(id)arg2;
- (void)finalizeUpdatingTableAtRunLoopCompletion;
- (void)deleteRowsAtIndexPaths:(id)arg1;
- (void)insertRowsAtIndexPaths:(id)arg1;
- (void)reloadData;
- (void)beginUpdatingTableIfNecessary;
- (_Bool)_setInterfaceItemValue:(id)arg1 forKey:(id)arg2 property:(id)arg3;
- (id)_createInterfaceItems:(id)arg1 property:(id)arg2;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (_Bool)hasIntrinsicHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)layoutInterfaceItem:(id)arg1;
- (struct CGSize)sizeForInterfaceItem:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (void)contentSizeCategoryDidChange;
- (id)companionProperty;
- (void)setTarget:(id)arg1 forInterfaceItemAction:(SEL)arg2;
- (id)interfaceAction;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithItemDescription:(id)arg1 bundle:(id)arg2 stringsFileName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
