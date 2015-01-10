//
//  TuSDKCPImageResultOptions.h
//  TuSDK
//
//  Created by Clear Hu on 15/1/2.
//  Copyright (c) 2015年 Lasque. All rights reserved.
//

#import "TuSDKCPResultOptions.h"
#import "TuSDKCPImageResultController.h"

/**
 *  图片处理结果视图控制器选项
 */
@interface TuSDKCPImageResultOptions : TuSDKCPResultOptions
/**
 *  是否显示处理结果预览图 (默认：关闭，调试时可以开启)
 */
@property (nonatomic) BOOL showResultPreview;
@end
