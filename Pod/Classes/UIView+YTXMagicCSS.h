//
//  UIView+YTXMagicCSS.h
//  Pods
//
//  Created by CaoJun on 16/4/23.
//
//

#import <UIKit/UIKit.h>

@interface UIView (YTXMagicCSS)

#pragma mark - Magic Effects
- (nonnull CAAnimation *)ytx_magicAnimtionWithDurationTime:(NSTimeInterval)durationTime;

- (nonnull CAAnimation *)ytx_twisterInDownAnimtionWithDurationTime:(NSTimeInterval)durationTime;

- (nonnull CAAnimation *)ytx_twisterInUpAnimtionWithDurationTime:(NSTimeInterval)durationTime;

- (nonnull CAAnimation *)ytx_swapAnimtionWithDurationTime:(NSTimeInterval)durationTime;

@end
