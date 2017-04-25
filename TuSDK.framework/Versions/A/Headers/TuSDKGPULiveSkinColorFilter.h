//
//  TuSDKGPULiveSkinColorFilter.h
//  TuSDK
//
//  Created by Yanlin on 6/3/16.
//  Copyright © 2016 tusdk.com. All rights reserved.
//

#import "TuSDKFilterAdapter.h"
#import "TuSDKFilterParameter.h"

/**
 *  美白颜色滤镜，大眼瘦脸
 */
@interface TuSDKGPULiveSkinColorFilter : GPUImageFilterGroup<TuSDKFilterParameterProtocol, TuSDKFilterTexturesProtocol, TuSDKFilterStickerProtocol>

@end
