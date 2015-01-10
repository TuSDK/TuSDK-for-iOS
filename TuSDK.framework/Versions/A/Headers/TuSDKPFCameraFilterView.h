//
//  TuSDKPFCameraFilterView.h
//  TuSDK
//
//  Created by Clear Hu on 14/11/3.
//  Copyright (c) 2014年 Lasque. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TuSDKICTableViewCell.h"
#import "TuSDKICTableView.h"
#import "TuSDKFilterManager.h"

#pragma mark - TuSDKPFCameraFilterCell
/**
 *  滤镜列表视图行
 */
@interface TuSDKPFCameraFilterCell : TuSDKICTableViewCell{
    @protected
    // 选中视图
    UIView *_selectedView;
    // 效果图
    UIImageView *_renderView;
    // 滤镜名称
    UILabel *_nameLabel;
}
/**
 *  滤镜任务
 */
@property (nonatomic, assign) TuSDKTKFiltersTaskBase *filterTask;

/**
 *  设置滤镜名称
 *
 *  @param name   滤镜名称
 *  @param orient 方向
 */
- (void)setFilterName:(NSString *)name orient:(CGFloat)orient;

/**
 *  绑定滤镜图片
 *
 *  @param name 滤镜名称
 */
- (void)bindFilterWithName:(NSString *)name;
@end

#pragma mark - TuSDKPFCameraFilterView
/**
 *  滤镜列表视图委托
 */
@protocol TuSDKPFCameraFilterDelegate <NSObject>
/**
 *  选中一个滤镜
 *
 *  @param filterName 滤镜名称
 */
- (void)onTuSDKPFCameraFilterSelected:(NSString *)filterName;
@end

/**
 *  滤镜列表视图
 */
@interface TuSDKPFCameraFilterView : UIView<UITableViewDataSource, UITableViewDelegate>{
    @protected
    // 包装视图
    UIView *_wrap;
    // 列表视图
    TuSDKICTableView *_listView;
    // 主视图旋转
    CGFloat _mainRotat;
    // 将要旋转的角度
    CGFloat _orientTo;
    // 选中索引
    NSInteger _selectIndex;
    // 是否正在显示动画
    BOOL _isInAniming;
}
/**
 *  滤镜列表视图委托
 */
@property (nonatomic, assign) id<TuSDKPFCameraFilterDelegate> delegate;

/**
 *  是否为隐藏状态
 */
@property (nonatomic) BOOL isHiddenState;

/**
 *  行视图类对象  (默认: TuSDKPFCameraFilterCell，如需自定义请继承自 TuSDKPFCameraFilterCell)
 */
@property (nonatomic, strong) Class cellClazz;

/**
 *  列表视图
 */
@property (nonatomic, readonly) TuSDKICTableView *listView;

/**
 *  滤镜预览源图 (如果为空使用SDK自带源图进行渲染)
 */
@property (nonatomic, retain) UIImage *inputSampleImage;

/**
 *  需要显示的滤镜名称列表 (如果为空将显示所有自定义滤镜)
 */
@property (nonatomic, retain) NSArray *filterGroup;

/**
 *  滤镜任务
 */
@property (nonatomic, retain) TuSDKTKFiltersTaskBase *filterTask;

/**
 *  重置为默认状态
 */
-(void)resetDefault;

/**
 *  通知系统旋转
 *
 *  @param orient 旋转方向
 */
-(void)setOrient:(CGFloat)orient;

/**
 *  设置显示状态
 *
 *  @param isShow 是否隐藏
 */
- (void)setShowState:(BOOL)isHidden;

/**
 *  加载滤镜
 */
- (void)loadFilters;

/**
 *  加载滤镜
 *
 *  @param filterName 当前选中的滤镜
 */
- (void)loadFiltersSelected:(NSString *)filterName;
@end
