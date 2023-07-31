//
//  TuSDKReshapeGroup.h
//  TuSDK
//
//  Created by tusdk on 2020/12/16.
//  Copyright © 2020 tusdk.com. All rights reserved.
//

#import "TuSDKFilterAdapter.h"
#import "TuSDKFilterParameter.h"

NS_ASSUME_NONNULL_BEGIN

@interface TuSDKReshapeGroup : SLGPUImageFilterGroup<TuSDKFilterParameterProtocol, TuSDKFilterFacePositionProtocol>

@end

NS_ASSUME_NONNULL_END
