//
//  LOTKeyframe.h
//  Pods
//
//  Created by brandon_withrow on 7/10/17.
//
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import "LOTPlatformCompat.h"
#import "LOTBezierData.h"

// TODO Move to models

@interface LOTKeyframe : NSObject

- (instancetype)initWithKeyframe:(NSDictionary *)keyframe;
- (instancetype)initWithValue:(id)value;
- (void)remapValueWithBlock:(CGFloat (^)(CGFloat inValue))remapBlock;

@property (nonatomic, readonly) NSNumber *keyframeTime;
@property (nonatomic, readonly) BOOL isHold;
@property (nonatomic, readonly) CGPoint inTangent;
@property (nonatomic, readonly) CGPoint outTangent;
@property (nonatomic, readonly) CGPoint spatialInTangent;
@property (nonatomic, readonly) CGPoint spatialOutTangent;

@property (nonatomic, readonly) CGFloat floatValue;
@property (nonatomic, readonly) CGPoint pointValue;
@property (nonatomic, readonly) CGSize sizeValue;
@property (nonatomic, readonly) CGRect rectValue;
@property (nonatomic, readonly) UIColor *colorValue;
@property (nonatomic, readonly) LOTBezierData *pathData;
@property (nonatomic, readonly) NSArray *arrayValue;

@end

@interface LOTKeyframeGroup : NSObject

- (instancetype)initWithData:(id)data;

- (void)remapKeyframesWithBlock:(CGFloat (^)(CGFloat inValue))remapBlock;

@property (nonatomic, readonly) NSArray<LOTKeyframe *> *keyframes;

@end
