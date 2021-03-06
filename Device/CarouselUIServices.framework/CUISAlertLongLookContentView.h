//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CUISAlertPlatterView, NSString, UIImage, UIImageView, UILabel;

@interface CUISAlertLongLookContentView : UIView
{
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIImageView *_imageView;
    CUISAlertPlatterView *_background;
    struct CGSize _titleFitSize;
    struct CGSize _bodyFitSize;
    NSString *_title;
    NSString *_message;
    UIImage *_attachment;
}

- (id)preferredBlurView;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 message:(id)arg3 attachment:(id)arg4;
- (struct CGRect)imageFrameForCurrentWidth;
- (void)updateBodyFitSize;
- (void)updateTitleFitSize;
@property(retain, nonatomic) UIImage *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
@property(readonly, nonatomic) CUISAlertPlatterView *background; // @synthesize background=_background;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

