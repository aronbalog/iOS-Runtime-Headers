/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIMovieScrubberDataSource>, <UIMovieScrubberDelegate>, UIImage, UIImageView, UILabel, UIMovieScrubberEditingView, UIMovieScrubberTrackView;

@interface UIMovieScrubber : UIControl <UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    struct { 
        unsigned int continuous : 1; 
        unsigned int animating : 1; 
        unsigned int creatingSnapshot : 1; 
        unsigned int needsReload : 1; 
        unsigned int layoutTimeViews : 1; 
        unsigned int computeTrackRect : 1; 
        unsigned int clampingTrimRange; 
        unsigned int zoomed : 1; 
        unsigned int zoomAnimating : 1; 
        unsigned int trackIsPressed : 1; 
        unsigned int trackAnimating : 1; 
        unsigned int thumbIsVisible : 1; 
        unsigned int handleIsPressed : 1; 
        unsigned int willBeginEditing : 1; 
        unsigned int editing : 1; 
        unsigned int editingHandle; 
        unsigned int rotationDisabled; 
        unsigned int isInNavigationBar : 1; 
        unsigned int delegateValueDidChange : 1; 
        unsigned int delegateStartValueDidChange : 1; 
        unsigned int delegateEndValueDidChange : 1; 
        unsigned int delegateWillBeginRequestingThumbnails : 1; 
        unsigned int delegateDidFinishRequestingThumbnails : 1; 
        unsigned int delegateWillBeginEditing : 1; 
        unsigned int delegateDidBeginEditing : 1; 
        unsigned int delegateDidCancelEditing : 1; 
        unsigned int delegateEditingAnimationFinished : 1; 
        unsigned int delegateWidthDeltaOriginXDelta : 1; 
    <UIMovieScrubberDataSource> *_dataSource;
    <UIMovieScrubberDelegate> *_delegate;
    BOOL _editable;
    UIMovieScrubberEditingView *_editingView;
    UILabel *_elapsedLabel;
    UIImage *_fillImage;
    float _hitOffset;
    UIImage *_innerShadowImage;
    UIImage *_maskImage;
    double _maxTrimmedLength;
    double _maximumValue;
    double _minTrimmedLength;
    double _minimumValue;
    UILabel *_remainingLabel;
    UIImage *_shadowImage;
    BOOL _showTimeViews;
    } _sliderFlags;
    UIImageView *_thumbView;
    int _timeComponents;
    } _touchLocationWhenTrackPressBegan;
    } _trackRect;
    UIMovieScrubberTrackView *_trackView;
    double _trimEndValue;
    double _trimStartValue;
    double _value;
    double _zoomAnimationDelay;
    double _zoomAnimationDuration;
    double _zoomDelay;
}

@property(getter=isContinuous) BOOL continuous;
@property <UIMovieScrubberDataSource> * dataSource;
@property <UIMovieScrubberDelegate> * delegate;
@property double duration;
@property(getter=isEditable) BOOL editable;
@property(getter=isEditing) BOOL editing;
@property(readonly) BOOL isInsideNavigationBar;
@property double maximumTrimLength;
@property double minimumTrimLength;
@property BOOL showTimeViews;
@property BOOL thumbIsVisible;
@property double trimEndValue;
@property double trimStartValue;
@property double value;
@property double zoomDelay;

+ (id)timeStringForSeconds:(int)arg1 forceFullWidthComponents:(BOOL)arg2 isElapsed:(BOOL)arg3;

- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)_animateAfterEdit:(BOOL)arg1;
- (void)_beginTrackPressWithTouch:(id)arg1 touchesBegan:(BOOL)arg2;
- (void)_cancelTrackPress:(BOOL)arg1;
- (void)_cancelTrackPressIfNeccessaryWithTouch:(id)arg1;
- (void)_computeTrackRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (float)_editingFrameDeltaXForValue:(float)arg1 handle:(int)arg2;
- (int)_editingHandleWithTouch:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_editingRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_editingViewFrameForEndValueWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_editingViewFrameForStartValueWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_initSubviews;
- (id)_scriptingInfo;
- (void)_sendDelayedActions;
- (void)_setValue:(double)arg1 andSendAction:(BOOL)arg2;
- (void)_sliderAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_sliderAnimationWillStart:(id)arg1 context:(void*)arg2;
- (void)_sliderValueDidChange:(id)arg1;
- (void)_trackPressWasHeld;
- (void)_trimAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateThumbLocation;
- (void)_updateTimes;
- (float)_valueForTouch:(id)arg1;
- (void)animateAfterEdit;
- (void)animateCancelEdit;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)cancelTouchTracking;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (double)duration;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAnimatingValueChange;
- (BOOL)isContinuous;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isInsideNavigationBar;
- (void)layoutSubviews;
- (double)maximumTrimLength;
- (double)minimumTrimLength;
- (void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(float)arg2 actualSizeWidthDelta:(float)arg3 originXDelta:(float)arg4 minimumVisibleValue:(float)arg5 maximumVisibleValue:(float)arg6;
- (id)movieScrubberTrackView:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (void)movieScrubberTrackView:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (id)movieScrubberTrackView:(id)arg1 timestampsStartingAt:(id)arg2 endingAt:(id)arg3 maxCount:(int)arg4;
- (void)movieScrubberTrackViewDidCollapse:(id)arg1;
- (void)movieScrubberTrackViewDidExpand:(id)arg1;
- (void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)arg1;
- (double)movieScrubberTrackViewDuration:(id)arg1;
- (float)movieScrubberTrackViewThumbnailAspectRatio:(id)arg1;
- (void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)arg1;
- (double)movieScrubberTrackViewZoomAnimationDelay:(id)arg1;
- (double)movieScrubberTrackViewZoomAnimationDuration:(id)arg1;
- (BOOL)pointInsideThumb:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)reloadData;
- (id)scriptingInfoWithChildren;
- (void)setContinuous:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMaximumTrimLength:(double)arg1;
- (void)setMinimumTrimLength:(double)arg1;
- (void)setRotationDisabled:(BOOL)arg1;
- (void)setShowTimeViews:(BOOL)arg1;
- (void)setThumbIsVisible:(BOOL)arg1;
- (void)setThumbnailImage:(struct CGImage { }*)arg1 forTimestamp:(id)arg2;
- (void)setTrimEndValue:(double)arg1;
- (void)setTrimStartValue:(double)arg1;
- (void)setValue:(double)arg1 animated:(BOOL)arg2;
- (void)setValue:(double)arg1;
- (void)setZoomAnimationDuration:(double)arg1;
- (void)setZoomDelay:(double)arg1;
- (BOOL)showTimeViews;
- (BOOL)thumbIsVisible;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbRectForValue:(float)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackRect;
- (double)trimEndValue;
- (double)trimStartValue;
- (double)value;
- (double)zoomDelay;

@end
