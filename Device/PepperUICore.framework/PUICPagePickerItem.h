//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIImage;

@interface PUICPagePickerItem : NSObject
{
    BOOL _needsItemChangeNotification;
    NSString *_title;
    UIImage *_image;
    CDUnknownBlockType _imageBlock;
    UIColor *_backgroundColor;
    UIImage *_selectedImage;
    CDUnknownBlockType _selectedImageBlock;
    UIColor *_selectedBackgroundColor;
}

@property(retain, nonatomic) UIColor *selectedBackgroundColor; // @synthesize selectedBackgroundColor=_selectedBackgroundColor;
@property(copy, nonatomic) CDUnknownBlockType selectedImageBlock; // @synthesize selectedImageBlock=_selectedImageBlock;
@property(copy, nonatomic) CDUnknownBlockType imageBlock; // @synthesize imageBlock=_imageBlock;
- (void)_setNeedsItemDidChangeNotification;
- (id)_keyPathsForItemDidChangeNotifications;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)init;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)dealloc;

@end
