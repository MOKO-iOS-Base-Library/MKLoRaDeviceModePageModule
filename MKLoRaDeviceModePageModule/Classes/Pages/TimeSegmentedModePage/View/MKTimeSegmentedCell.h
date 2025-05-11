//
//  MKTimeSegmentedCell.h
//  MKLoRaDeviceModePageModule_Example
//
//  Created by aa on 2024/11/21.
//  Copyright © 2024 lovexiaoxia. All rights reserved.
//

#import <MKBaseModuleLibrary/MKBaseCell.h>

NS_ASSUME_NONNULL_BEGIN

@interface MKTimeSegmentedCellModel : NSObject

@property (nonatomic, assign)NSInteger index;

/// 0~24
@property (nonatomic, assign)NSInteger startHour;

/// 0-59
@property (nonatomic, assign)NSInteger startMinuteGear;

/// 0~24
@property (nonatomic, assign)NSInteger endHour;

/// 0-59
@property (nonatomic, assign)NSInteger endMinuteGear;

/// Report Interval   30s - 86400s
@property (nonatomic, copy)NSString *interval;

@end

@protocol MKTimeSegmentedCellDelegate <NSObject>

/**
 删除
 
 @param index 所在index
 */
- (void)mk_timeSegmentedCell_deleteButtonPressed:(NSInteger)index;

/// Hour按钮选择
/// - Parameters:
///   - index: 当前cell所在index
///   - start: 起始时间还是结束时间
///   - hour: 当前选择的hour
- (void)mk_timeSegmentedCell_hourButtonPressed:(NSInteger)index start:(BOOL)start hour:(NSInteger)hour;

/// Minute按钮选择
/// - Parameters:
///   - index: 当前cell所在index
///   - start: 起始时间还是结束时间
///   - hour: 当前选择的minuteGear
- (void)mk_timeSegmentedCell_minuteGearButtonPressed:(NSInteger)index start:(BOOL)start minuteGear:(NSInteger)minuteGear;

/// Report Interval 输入框改变
/// - Parameters:
///   - index: 当前cell所在index
///   - interval: 当前输入框内容
- (void)mk_timeSegmentedCell_reportIntervalChanged:(NSInteger)index interval:(NSString *)interval;

/**
 重新设置cell的子控件位置，主要是删除按钮方面的处理
 */
- (void)mk_cellResetFrame;

/// cell的点击事件，用来重置cell的布局
- (void)mk_cellTapAction;

@end

@interface MKTimeSegmentedCell : MKBaseCell

@property (nonatomic, strong)MKTimeSegmentedCellModel *dataModel;

@property (nonatomic, weak)id <MKTimeSegmentedCellDelegate>delegate;

+ (MKTimeSegmentedCell *)initCellWithTableView:(UITableView *)tableView;

- (BOOL)canReset;
- (void)resetCellFrame;
- (void)resetFlagForFrame;

@end

NS_ASSUME_NONNULL_END
