//
//  TuSDKAOValid.h
//  TuSDK
//
//  Created by Clear Hu on 14/12/15.
//  Copyright (c) 2014年 tusdk.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TuSDKConfig.h"

/**
 *  SDK用户验证
 */
@interface TuSDKAOValid : NSObject

/**
 *  SDK用户验证
 *
 *  @return shared SDK用户验证
 */
+ (instancetype) shared;

/**
 *  是否通过开发者账号验证
 */
@property (nonatomic, readonly, getter=isValid) BOOL isValid;

/**
 *  开发者级别
 */
@property (nonatomic, readonly, getter=level) NSInteger level;

/**
 *  开发者ID
 */
@property (nonatomic, readonly) NSString *developerId;

/**
 *  Sdk配置
 */
@property (nonatomic, readonly) TuSDKConfig *sdkConfig;

/**
 *  验证开发者ID
 *
 *  @param key 开发者ID
 *  @param devType 开发模式(需要与lsq_tusdk_configs.json中masters.key匹配， 如果找不到devType将默认读取master字段)
 *
 *  @return BOOL 是否通过验证
 */
- (BOOL)sdkValidWithKey:(NSString *)key devType:(NSString *)devType;

/**
 *  验证开发者ID
 *
 *  @return BOOL 是否通过验证
 */
- (BOOL)sdkValid;

/**
 * 获取在线配置信息
 */
- (void)fetchConfigFromService;

/**
 *  是否允许该级别
 *
 *  @return BOOL 级别
 */
- (BOOL)allowLevel:(NSUInteger)level;

/**
 *  图片最大允许处理的边长
 *
 *  @return maxImageSide 边长
 */
- (CGFloat)maxImageSide;

/**
 *  允许最多使用贴纸数量
 *
 *  @return maxStickers 最多使用贴纸数量
 */
- (NSUInteger)maxStickers;

/** local filter Count */
- (NSUInteger)localFilterCount;

/** local sticker Count */
- (NSUInteger)localStickerCount;

/** service Expire */
- (BOOL)serviceExpire;

/** no Power */
- (BOOL)noPower;

/** render filter thumb */
- (BOOL)renderFilterThumb;

/** 涂抹功能是否开启 */
- (BOOL)smudgeEnabled;

/** 滤镜涂抹功能是否开启 */
- (BOOL)wipeFilterEnabled;

/** HDR 功能是否开启 */
- (BOOL)hdrFilterEnabled;

/** 美颜级别 */
- (NSUInteger)beautyLevel;

/** 视频录制抹功能是否开启 */
- (BOOL)videoRecordEnabled;

/** 视频录制时长控制是否开启 */
- (BOOL)videoDurationEnabled;

/** 视频编辑功能是否开启 */
- (BOOL)videoEditEnabled;

/** 视频直播功能是否开启 */
- (BOOL)videoStreamEnabled;

/** 本地人脸检测标点数 */
- (NSUInteger)faceLocalMarks;

/** 本地人脸检测图片 */
- (BOOL)faceLocalImageSupport;

/** 基于本地人脸检测的美颜 */
- (BOOL)faceLocalBeautySupport;

/** 本地人脸检测视频 */
- (BOOL)faceLocalVideoSupport;

/** FilterAPI是否可用 */
- (BOOL)filterAPIEnabled;

// video record continuous support 断点续拍
- (BOOL)videoRecordContinuousSupport;

// video camera shot support 拍照
- (BOOL)videoCameraShotSupport;

// video camera sticker support 相机贴纸
- (BOOL)videoCameraStickerSupport;

// video camera bitrate support 相机 自定义码率
- (BOOL)videoCameraBitrateSupport;

// video editor music support 编辑视频 添加音乐
- (BOOL)videoEditorMusicSupport;

// video editor sticker support 编辑视频 添加贴纸
- (BOOL)videoEditorStickerSupport;

// video editor filter support 编辑视频 使用滤镜
- (BOOL)videoEditorFilterSupport;

// video editor bitrate support 编辑视频 自定义码率
- (BOOL)videoEditorBitrateSupport;

// video editor resolution support 编辑视频 自定义分辨率
- (BOOL)videoEditorResolutionSupport;


/**
 *  解密文本
 *
 *  @param txt 加密文本
 *
 *  @return txt 解密文本
 */
- (NSString *)sdkDecodeWithString:(NSString *)txt;

/**
 *  解密数据
 *
 *  @param data 数据
 *  @param key  key
 *  @param type type
 *
 *  @return data 解密文本
 */
- (NSString *)sdkDecodeWithData:(NSData *)data key:(NSString *)key type:(NSUInteger)type;

/**
 *  验证滤镜
 *
 *  @param filterId 滤镜ID
 *  @param type     验证方式
 *
 *  @return BOOL 是否验证成功
 */
- (BOOL)filterValidWithID:(uint64_t)filterId type:(NSUInteger)type;

/**
 *  验证滤镜密钥
 *
 *  @param key      滤镜验证码
 *  @param type     验证方式
 *  @param filterId 滤镜ID
 *
 *  @return BOOL 是否验证成功
 */
- (BOOL)filterValidWithKey:(NSString *)key type:(NSUInteger)type filterId:(uint64_t)filterId;

/**
 *  验证视频滤镜
 *
 *  @param filterId 滤镜ID
 *  @param type     验证方式
 *
 *  @return BOOL 是否验证成功
 */
- (BOOL)videoFilterValidWithID:(uint64_t)filterId type:(NSUInteger)type;

/**
 *  验证滤镜是否可通过API调用
 *
 *  @param filterId 滤镜ID
 *
 *  @return BOOL 是否验证成功
 */
- (BOOL)filterAPIValidWithID:(uint64_t)filterId;

/**
 *  验证视频滤镜密钥
 *
 *  @param key      滤镜验证码
 *  @param type     验证方式
 *  @param filterId 滤镜ID
 *
 *  @return BOOL 是否验证成功
 */
- (BOOL)videoFilterValidWithKey:(NSString *)key type:(NSUInteger)type filterId:(uint64_t)filterId;

/**
 *  验证贴纸
 *
 *  @param stickerId 贴纸ID
 *  @param type      验证方式
 *
 *  @return BOOL 是否验证成功
 */
- (BOOL)stickerValidWithID:(uint64_t)stickerId type:(NSUInteger)type;

/**
 *  验证贴纸密钥
 *
 *  @param key       贴纸密钥
 *  @param type      验证方式
 *  @param stickerId 贴纸ID
 *
 *  @return BOOL 是否验证成功
 */
- (BOOL)stickerValidWithKey:(NSString *)key type:(NSUInteger)type stickerId:(uint64_t)stickerId;

/**
 *  验证笔刷
 *
 *  @param stickerId 笔刷ID
 *  @param type      验证方式
 *
 *  @return BOOL 是否验证成功
 */
- (BOOL)brushValidWithID:(uint64_t)brushId type:(NSUInteger)type;

/**
 *  验证笔刷密钥
 *
 *  @param key       笔刷密钥
 *  @param type      验证方式
 *  @param stickerId 笔刷ID
 *
 *  @return BOOL 是否验证成功
 */
- (BOOL)brushValidWithKey:(NSString *)key type:(NSUInteger)type brushId:(uint64_t)brushId;
@end
