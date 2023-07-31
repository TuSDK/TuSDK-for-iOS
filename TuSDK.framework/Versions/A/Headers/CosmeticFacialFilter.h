//
//  CosmeticFacialFilter.h
//  TuSDK
//
//  Created by tusdk on 2020/12/17.
//  Copyright © 2020 tusdk.com. All rights reserved.
//

#import "TuSDKFilterAdapter.h"
#import "TuSDKFilterParameter.h"
#import "TuSDKCosmeticImage.h"

NS_ASSUME_NONNULL_BEGIN

@interface CosmeticFacialFilter : TuSDKTwoInputFilter<TuSDKFilterParameterProtocol,TuSDKFilterFacePositionProtocol>

- (void) updateSticker:(TuSDKCosmeticImage *)stickerImage;

@property(readwrite, nonatomic) float alpha;

@end

NS_ASSUME_NONNULL_END
