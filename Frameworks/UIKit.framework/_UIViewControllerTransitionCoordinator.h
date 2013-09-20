/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, _UIViewControllerTransitionContext;

@interface _UIViewControllerTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {
    NSMutableArray *__alongsideAnimationViews;
    NSMutableArray *__alongsideAnimations;
    NSMutableArray *__alongsideCompletions;
    NSMutableArray *__interactiveChangeHandlers;
    _UIViewControllerTransitionContext *__mainContext;
}

@property(setter=_setAlongsideAnimationViews:,retain) NSMutableArray * _alongsideAnimationViews;
@property(setter=_setAlongsideAnimations:,retain) NSMutableArray * _alongsideAnimations;
@property(setter=_setAlongsideCompletions:,retain) NSMutableArray * _alongsideCompletions;
@property(setter=_setInteractiveChangeHandlers:,retain) NSMutableArray * _interactiveChangeHandlers;
@property(setter=_setMainContext:) _UIViewControllerTransitionContext * _mainContext;

- (id)_alongsideAnimationViews;
- (id)_alongsideAnimations:(BOOL)arg1;
- (id)_alongsideAnimations;
- (id)_alongsideCompletions:(BOOL)arg1;
- (id)_alongsideCompletions;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(id)arg2;
- (id)_interactiveChangeHandlers:(BOOL)arg1;
- (id)_interactiveChangeHandlers;
- (id)_mainContext;
- (void)_setAlongsideAnimationViews:(id)arg1;
- (void)_setAlongsideAnimations:(id)arg1;
- (void)_setAlongsideCompletions:(id)arg1;
- (void)_setInteractiveChangeHandlers:(id)arg1;
- (void)_setMainContext:(id)arg1;
- (BOOL)animateAlongsideTransition:(id)arg1 completion:(id)arg2;
- (BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(id)arg2 completion:(id)arg3;
- (int)completionCurve;
- (float)completionVelocity;
- (id)containerView;
- (void)dealloc;
- (void)handlerToInvokeOnInteractivityChanges:(id)arg1;
- (id)initWithMainContext:(id)arg1;
- (BOOL)initiallyInteractive;
- (BOOL)isAnimated;
- (BOOL)isCancelled;
- (BOOL)isCompleting;
- (BOOL)isInteractive;
- (void)notifyWhenInteractionEndsUsingBlock:(id)arg1;
- (float)percentComplete;
- (int)presentationStyle;
- (double)transitionDuration;
- (id)viewControllerForKey:(id)arg1;

@end