//
//  TuSDKReshapeEyeFilter.h
//  TuSDK
//
//  Created by tusdk on 2020/12/16.
//  Copyright © 2020 tusdk.com. All rights reserved.
//

#import "TuSDKFilterAdapter.h"
#import "TuSDKFilterParameter.h"

NS_ASSUME_NONNULL_BEGIN

@interface TuSDKReshapeEyeFilter : TuSDKTwoInputFilter<TuSDKFilterFacePositionProtocol>

-(TuSDKFilterParameter *)configParams:(TuSDKFilterParameter *)params;
- (void)submitFilterArg:(TuSDKFilterArg *)arg;

@end

NS_ASSUME_NONNULL_END
