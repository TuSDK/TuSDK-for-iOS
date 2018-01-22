//
//  TuSDKParticleItem.h
//  TuSDK
//
//  Created by Clear Hu on 2017/12/23.
//  Copyright © 2017年 tusdk.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TuSDKTSUIColor+Extend.h"
#import "TuSDKDataJson.h"

/** 发射器模式*/
typedef NS_ENUM(NSUInteger, TuSDKParticleMode) {
    /** 重力模式数据 */
    lsqTuSDKParticleGravity = 0,
    /** 径向模式数据 */
    lsqTuSDKParticleRadius
};

/** 数据需要复制，不允许引用*/
/** 重力模式数据 */
struct LSQParticleGravity{
    /** 重力加速度X*/
    CGFloat dirX;
    /** 重力加速度Y*/
    CGFloat dirY;
    /** 径向加速度*/
    CGFloat radialAccel;
    /** 切向加速度*/
    CGFloat tangentialAccel;
};
typedef struct LSQParticleGravity LSQParticleGravity;

/** 径向模式数据 */
struct LSQParticleRadius{
    /** 方向*/
    CGFloat angle;
    /** 每秒角度*/
    CGFloat degreesPerSecond;
    /** 半径*/
    CGFloat radius;
    /** 增量半径*/
    CGFloat deltaRadius;
};
typedef struct LSQParticleRadius LSQParticleRadius;

/** 粒子对象*/
@interface TuSDKParticleItem : NSObject
/** 粒子位置*/
@property(readwrite, nonatomic) CGPoint pos;
/** 粒子开始位置*/
@property(readwrite, nonatomic) CGPoint startPos;
/** 粒子颜色*/
@property(readwrite, nonatomic) LSQColor color;
/** 粒子开始颜色*/
@property(readwrite, nonatomic) LSQColor deltaColor;
/** 粒子大小*/
@property(readwrite, nonatomic) CGFloat size;
/** 粒子增量大小*/
@property(readwrite, nonatomic) CGFloat deltaSize;
/** 粒子旋转角度*/
@property(readwrite, nonatomic) CGFloat rotation;
/** 粒子增量旋转角度*/
@property(readwrite, nonatomic) CGFloat deltaRotation;
/** 粒子生存时间*/
@property(readwrite, nonatomic) CGFloat timeToLive;
/** 重力模式数据 */
@property(readwrite, nonatomic) LSQParticleGravity gravityMode;
/** 径向模式数据 */
@property(readwrite, nonatomic) LSQParticleRadius radiusMode;

/** 粒子对象*/
+ (id) item;

/** 复制数据给输入对象*/
- (void)copyTo:(TuSDKParticleItem *)item;
/** 复制输入对象数据*/
- (void)copyFrom:(TuSDKParticleItem *)item;
@end

/** 重力模式配置*/
@interface TuSDKParticleGravityConfig : TuSDKDataJson
/** 重力加速度*/
@property(nonatomic) CGPoint gravity;
/** 粒子速度*/
@property(nonatomic) CGFloat speed;
/** 粒子速度浮动值*/
@property(nonatomic) CGFloat speedVar;
/** 径向加速度*/
@property(nonatomic) CGFloat radialAccel;
/** 径向加速度浮动值*/
@property(nonatomic) CGFloat radialAccelVar;
/** 切向加速度*/
@property(nonatomic) CGFloat tangentialAccel;
/** 切向加速度浮动值*/
@property(nonatomic) CGFloat tangentialAccelVar;
/** 是否跟随方向旋转*/
@property(nonatomic) BOOL rotationIsDir;
@end

/** 镜像模式配置*/
@interface TuSDKParticleRadiusConfig : TuSDKDataJson
/** 起始半径*/
@property(nonatomic) CGFloat startRadius;
/** 起始半径浮动值*/
@property(nonatomic) CGFloat startRadiusVar;
/** 结束半径*/
@property(nonatomic) CGFloat endRadius;
/** 结束半径浮动值*/
@property(nonatomic) CGFloat endRadiusVar;
/** 旋转角速度*/
@property(nonatomic) CGFloat rotatePerSecond;
/** 旋转角速度浮动值*/
@property(nonatomic) CGFloat rotatePerSecondVar;
@end

/** 粒子发射器配置*/
@interface TuSDKParticleConfig : TuSDKDataJson
/** 粒子总数*/
@property(nonatomic) NSInteger maxParticles;
/** 配置文件名称*/
@property (nonatomic, copy) NSString *configName;
/** 材质名称*/
@property (nonatomic, copy) NSString *texture;
/** 生存时间 单位：秒*/
@property(nonatomic) CGFloat life;
/** 生存时间浮动值 单位：秒*/
@property(nonatomic) CGFloat lifeVar;
/** 发射角度 基于OPENGL坐标 左下*/
@property(nonatomic) CGFloat angle;
/** 发射角度浮动值*/
@property(nonatomic) CGFloat angleVar;
/** 持续时间 单位：秒*/
@property(nonatomic) CGFloat duration;
/** 缓和源模式*/
@property(nonatomic) NSInteger blendFuncSrc;
/** 缓和目标模式*/
@property(nonatomic) NSInteger blendFuncDst;
/** 起始颜色*/
@property(nonatomic) LSQColor startColor;
/** 起始颜色浮动值*/
@property(nonatomic) LSQColor startColorVar;
/** 结束颜色*/
@property(nonatomic) LSQColor endColor;
/** 结束颜色浮动值*/
@property(nonatomic) LSQColor endColorVar;
/** 起始大小*/
@property(nonatomic) CGFloat startSize;
/** 起始大小浮动值*/
@property(nonatomic) CGFloat startSizeVar;
/** 结束大小*/
@property(nonatomic) CGFloat endSize;
/** 结束大小浮动值*/
@property(nonatomic) CGFloat endSizeVar;
/** 起始旋转角度*/
@property(nonatomic) CGFloat startSpin;
/** 起始旋转角度浮动值*/
@property(nonatomic) CGFloat startSpinVar;
/** 结束旋转角度*/
@property(nonatomic) CGFloat endSpin;
/** 结束旋转角度浮动值*/
@property(nonatomic) CGFloat endSpinVar;
/** 发射器位置*/
@property(nonatomic) CGPoint position;
/** 发射器起始位置浮动值*/
@property(nonatomic) CGPoint positionVar;
/** 发射器模式*/
@property(nonatomic) TuSDKParticleMode emitterMode;
/** 发射速率 每秒多少个*/
@property(nonatomic) CGFloat emissionRate;
/** 粒子垂直翻转方差*/
@property(nonatomic) NSInteger yCoordFlipped;
/** 重力模式配置*/
@property(nonatomic, retain) TuSDKParticleGravityConfig *gravity;
/** 镜像模式配置*/
@property(nonatomic, retain) TuSDKParticleRadiusConfig *radius;

/** 加法混合*/
- (void)setBlendAdditive:(BOOL)additive;
/** 是否为加法混合*/
- (BOOL)isBlendAdditive;
@end
