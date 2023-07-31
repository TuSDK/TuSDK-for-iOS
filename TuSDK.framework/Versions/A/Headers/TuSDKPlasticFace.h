//
//  TuSdkPlasticFace.h
//  TuSDK
//
//  Created by hecc on 2018/8/16.
//  Copyright © 2018年 tusdk.com. All rights reserved.
//

#import "TuSDKFilterAdapter.h"
#import "TuSDKFilterParameter.h"

@interface TuSDKPlasticFace : TuSDKFilter<TuSDKFilterParameterProtocol, TuSDKFilterFacePositionProtocol>

-(TuSDKFilterParameter *)configParams:(TuSDKFilterParameter *)params;
- (void)submitFilterArg:(TuSDKFilterArg *)arg;

@end
