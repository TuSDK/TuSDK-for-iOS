//
//  TuSDKCPStackFilterBarBase.h
//  TuSDK
//
//  Created by Jimmy Zhao on 16/9/23.
//  Copyright © 2016年 tusdk.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TuSDKCPStackFilterTableView.h"
#import "TuSDKCPFilterOnlineControllerInterface.h"

@protocol TuSDKCPStackFilterBarInterface;

/**
 *  滤镜组选择栏委托
 */
@protocol TuSDKCPStackFilterBarDelegate <NSObject>
/**
 *  选中一个滤镜数据
 *
 *  @param bar  滤镜组选择栏
 *  @param cell 滤镜分组元素视图
 *  @param mode 滤镜分组元素
 *
 *  @return BOOL 是否允许继续执行
 */
- (BOOL)onTuSDKCPGroupFilterBar:(UIView<TuSDKCPStackFilterBarInterface> *)bar
                   selectedCell:(UITableViewCell<TuSDKCPGroupFilterItemCellInterface> *)cell
                           mode:(TuSDKCPGroupFilterItem *)mode;
@end

#pragma mark - TuSDKCPStackFilterBarInterface
/**
 *  滤镜组选择栏接口
 */
@protocol TuSDKCPStackFilterBarInterface <NSObject>
/**
 *  滤镜组选择栏委托
 */
@property (nonatomic, weak) id<TuSDKCPStackFilterBarDelegate> delegate;
/**
 *  滤镜分组元素类型
 */
@property (nonatomic)lsqGroupFilterAction action;

/**
 *  开启滤镜配置选项
 */
@property (nonatomic) BOOL enableFilterConfig;

/**
 *  行视图宽度
 */
@property (nonatomic)CGFloat cellWidth;

/**
 *  滤镜列表行视图类 (默认:TuSDKCPGroupFilterItemCellBase, 需要继承 UITableViewCell<TuSDKCPGroupFilterItemCellInterface>)
 */
@property (nonatomic, strong)Class filterTableCellClazz;

/**
 *  滤镜列表折叠视图类 (默认:TuSDKCPGroupFilterGroupCellBase, 需要继承 UITableViewCell<TuSDKCPGroupFilterItemCellInterface>)
 */
@property (nonatomic, strong) Class stackViewClazz;

/**
 *  是否保存最后一次使用的滤镜
 */
@property (nonatomic) BOOL saveLastFilter;

/**
 *  自动选择分组滤镜指定的默认滤镜
 */
@property (nonatomic) BOOL autoSelectGroupDefaultFilter;

/**
 *  指定显示的滤镜组
 */
@property (nonatomic, retain) NSArray * filterGroup;
/**
 *  是否允许选择列表
 */
@property (nonatomic) BOOL allowsSelection;

/**
 *  开启无效果滤镜 (默认: 开启)
 */
@property (nonatomic) BOOL enableNormalFilter;

/**
 *  开启在线滤镜
 */
@property (nonatomic) BOOL enableOnlineFilter;

/**
 *  视图控制器
 */
@property (nonatomic, assign) UIViewController *controller;

/**
 *  开启用户历史记录
 */
@property (nonatomic) BOOL enableHistory;

/**
 *  在线滤镜控制器类型 (需要继承 UIViewController,以及实现TuSDKCPFilterOnlineControllerInterface接口)
 */
@property (nonatomic) Class onlineControllerClazz;

/**
 *  是否渲染封面 (使用设置的滤镜直接渲染，需要拥有滤镜列表封面设置权限，请访问TUTUCLOUD.com控制台)
 */
@property (nonatomic) BOOL isRenderFilterThumb;

/**
 *  自定义封面原图(使用设置的滤镜直接渲染，需要拥有滤镜列表封面设置权限，请访问TUTUCLOUD.com控制台)
 *
 *  @param image 自定义封面原图
 */
- (void)setThumbImage:(UIImage *)image;

/**
 *  加载滤镜分组
 */
- (void)loadFilters;

/**
 *  加载滤镜分组
 *
 *  @param option 滤镜配置选项
 */
- (void)loadFiltersWithOption:(TuSDKFilterOption *)option;

/**
 *  删除滤镜组
 *
 *  @param groupId 滤镜组ID
 */
- (void)removeWithGroupId:(uint64_t)groupId;

/**
 *  退出删除状态
 */
- (void)exitRemoveState;
@end

#pragma mark - TuSDKCPFilterBarBase
/**
 *  滤镜组选择栏
 */
@interface TuSDKCPStackFilterBarBase : UIView<TuSDKCPStackFilterTableViewDelegate, TuSDKCPGroupFilterGroupCellDelegate, TuSDKCPFilterOnlineControllerDelegate, TuSDKCPStackFilterBarInterface>
/**
 *  滤镜列表
 */
@property (nonatomic, readonly) UIView<TuSDKCPStackFilterTableViewInterface> *filterTable;

/**
 *  滤镜组选择栏委托
 */
@property (nonatomic, weak) id<TuSDKCPStackFilterBarDelegate> delegate;

/**
 *  滤镜分组元素类型
 */
@property (nonatomic)lsqGroupFilterAction action;

/**
 *  行视图宽度
 */
@property (nonatomic)CGFloat cellWidth;

/**
 *  区头视图宽度
 */
@property (nonatomic)CGFloat stackViewWidth;

/**
 *  滤镜列表行视图类 (默认:TuSDKCPGroupFilterItemCellBase, 需要继承 UITableViewCell<TuSDKCPGroupFilterItemCellInterface>)
 */
@property (nonatomic, strong)Class filterTableCellClazz;

/**
 *  滤镜列表折叠视图类 (默认:TuSDKCPGroupFilterGroupCellBase, 需要继承 UITableViewCell<TuSDKCPGroupFilterItemCellInterface>)
 */
@property (nonatomic, strong) Class stackViewClazz;

/**
 *  是否保存最后一次使用的滤镜
 */
@property (nonatomic) BOOL saveLastFilter;

/**
 *  自动选择分组滤镜指定的默认滤镜
 */
@property (nonatomic) BOOL autoSelectGroupDefaultFilter;

/**
 *  指定显示的滤镜组
 */
@property (nonatomic, retain) NSArray * filterGroup;

/**
 *  是否允许选择列表
 */
@property (nonatomic) BOOL allowsSelection;

/**
 *  开启滤镜配置选项
 */
@property (nonatomic) BOOL enableFilterConfig;

/**
 *  开启无效果滤镜 (默认: 开启)
 */
@property (nonatomic) BOOL enableNormalFilter;

/**
 *  开启在线滤镜
 */
@property (nonatomic) BOOL enableOnlineFilter;

/**
 *  视图控制器
 */
@property (nonatomic, assign) UIViewController *controller;

/**
 *  开启用户历史记录
 */
@property (nonatomic) BOOL enableHistory;

/**
 *  在线滤镜控制器类型 (需要继承 UIViewController,以及实现TuSDKCPFilterOnlineControllerInterface接口)
 */
@property (nonatomic) Class onlineControllerClazz;

/**
 *  是否渲染封面 (使用设置的滤镜直接渲染，需要拥有滤镜列表封面设置权限，请访问TUTUCLOUD.com控制台)
 */
@property (nonatomic) BOOL isRenderFilterThumb;

@end
