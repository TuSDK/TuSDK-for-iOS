//
//  GeeV2PFEditSkinController.h
//  TuSDKGeeV2
//
//  Created by Jimmy Zhao on 16/9/18.
//  Copyright © 2016年 tusdk.com. All rights reserved.
//

#import "GeeV2PFEditSkinView.h"
#import "TuSDKGeeV2Import.h"

/**
 *  多功能美肤控制器
 */
@interface GeeV2PFEditSkinController : TuSDKPFEditSkinControllerBase
/**
 *  视图类 (默认:GeeV2PFEditSkinView, 需要继承 GeeV2PFEditSkinView)
 */
@property (nonatomic, strong) Class viewClazz;
@end

#pragma mark - TuSDKPFEditSkinMultipleOptions
/**
 *  多功能美肤控制器配置选项
 */
@interface GeeV2PFEditSkinOptions : TuSDKCPImageResultOptions
/**
 *  视图类 (默认:GeeV2PFEditSkinView, 需要继承 GeeV2PFEditSkinView)
 */
@property (nonatomic, strong) Class viewClazz;

/**
 *  创建颜色调整控制器对象
 *
 *  @return 颜色调整控制器对象
 */
- (GeeV2PFEditSkinController *)viewController;
@end